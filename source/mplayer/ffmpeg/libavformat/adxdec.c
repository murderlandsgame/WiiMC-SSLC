/*
 * Copyright (c) 2011 Justin Ruggles
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * CRI ADX demuxer
 */

#include "libavutil/intreadwrite.h"
#include "libavcodec/adx.h"
#include "avformat.h"
#include "internal.h"

#define BLOCK_SIZE    18
#define BLOCK_SAMPLES 32

//static int chans = 2;

typedef struct ADXDemuxerContext {
    int header_size;
} ADXDemuxerContext;

static int adx_probe(AVProbeData *p)
{
    int offset;
    if (AV_RB16(p->buf) != 0x8000)
        return 0;
    offset = AV_RB16(&p->buf[2]);
    if (   offset < 8
        || offset > p->buf_size - 4
        || memcmp(p->buf + offset - 2, "(c)CRI", 6))
        return 0;
    return AVPROBE_SCORE_MAX * 3 / 4;
}

static int adx_read_packet(AVFormatContext *s, AVPacket *pkt)
{
    ADXDemuxerContext *c = s->priv_data;
    AVCodecContext *avctx = s->streams[0]->codec;
    int ret, size;

    size = BLOCK_SIZE * avctx->channels;
	
	//for read_seek
	//chans = avctx->channels;

    pkt->pos = avio_tell(s->pb);
    pkt->stream_index = 0;

    ret = av_get_packet(s->pb, pkt, size * 128);
    if (ret < 0)
        return ret;
    if ((ret % size) && ret >= size) {
        size = ret - (ret % size);
        av_shrink_packet(pkt, size);
        pkt->flags &= ~AV_PKT_FLAG_CORRUPT;
    } else if (ret < size) {
        return AVERROR(EIO);
    } else {
        size = ret;
    }
	
    pkt->duration = size / (BLOCK_SIZE * avctx->channels);
    pkt->pts      = (pkt->pos - c->header_size) / (BLOCK_SIZE * avctx->channels);

    return 0;
}

static int adx_read_header(AVFormatContext *s)
{
    ADXDemuxerContext *c = s->priv_data;
    AVCodecContext *avctx;
    int ret;

    AVStream *st = avformat_new_stream(s, NULL);
    if (!st)
        return AVERROR(ENOMEM);
    avctx = s->streams[0]->codec;

    if (avio_rb16(s->pb) != 0x8000)
        return AVERROR_INVALIDDATA;
    c->header_size = avio_rb16(s->pb) + 4;
    avio_seek(s->pb, -4, SEEK_CUR);

    avctx->extradata = av_mallocz(c->header_size + FF_INPUT_BUFFER_PADDING_SIZE);
    if (!avctx->extradata)
        return AVERROR(ENOMEM);
    if (avio_read(s->pb, avctx->extradata, c->header_size) < c->header_size) {
        av_freep(&avctx->extradata);
        return AVERROR(EIO);
    }
    avctx->extradata_size = c->header_size;

    ret = avpriv_adx_decode_header(avctx, avctx->extradata,
                                   avctx->extradata_size, &c->header_size,
                                   NULL);
    if (ret)
        return ret;

    st->codec->codec_type  = AVMEDIA_TYPE_AUDIO;
    st->codec->codec_id    = s->iformat->raw_codec_id;
	st->codec->bit_rate    = avctx->sample_rate * avctx->channels * BLOCK_SIZE * 8LL / BLOCK_SAMPLES;

    avpriv_set_pts_info(st, 64, BLOCK_SAMPLES, avctx->sample_rate);

    return 0;
}

AVInputFormat ff_adx_demuxer = {
    .name           = "adx",
    .long_name      = NULL_IF_CONFIG_SMALL("CRI ADX"),
	.read_probe     = adx_probe,
    .priv_data_size = sizeof(ADXDemuxerContext),
    .read_header    = adx_read_header,
    .read_packet    = adx_read_packet,
    .extensions     = "adx",
    .raw_codec_id   = CODEC_ID_ADPCM_ADX,
    .flags          = AVFMT_GENERIC_INDEX,
};
