/*----------------------------------------------------------------------------
** This file has been automatically generated by configure any changes in it
** will be lost when you run configure again.
** Instead of modifying definitions here, use the --enable/--disable options
** of the configure script! See ./configure --help for details.
*---------------------------------------------------------------------------*/

#ifndef MPLAYER_CONFIG_H
#define MPLAYER_CONFIG_H

/* Undefine this if you do not want to select mono audio (left or right)
   with a stereo MPEG layer 2/3 audio stream. The command line option
   -stereo has three possible values (0 for stereo, 1 for left-only, 2 for
   right-only), with 0 being the default.
   */
#define CONFIG_FAKE_MONO 1

/* set up max. outburst. use 131072 for TrueHD SPDIF pass-through */
#define MAX_OUTBURST 131072

/* set up audio OUTBURST. Do not change this! */
#define OUTBURST 512

/* Enable fast OSD/SUB renderer (looks ugly, but uses less CPU power) */
#undef FAST_OSD
#undef FAST_OSD_TABLE

/* Define this to enable MPEG-1/2 image postprocessing in libmpeg2 */
#define MPEG12_POSTPROC 1
#define ATTRIBUTE_ALIGNED_MAX 16



#define CONFIGURATION ""

char MPLAYER_DATADIR[512]; 
char MPLAYER_CONFDIR[512]; 
char MPLAYER_LIBDIR[512]; 
char MPLAYER_CSSDIR[512]; 

/* definitions needed by included libraries */
#define HAVE_INTTYPES_H 1
/* libmpeg2 */

/* libdvdcss */
#define HAVE_ERRNO_H 1
/* libdvdcss + libdvdread */
#define HAVE_LIMITS_H 1
/* libdvdcss */
#define HAVE_UNISTD_H 1
/* libdvdread */
#define STDC_HEADERS 1
#define HAVE_MEMCPY 1
/* libdvdnav */
#define READ_CACHE_TRACE 0
/* libdvdread */
#define HAVE_DLFCN_H 1
#define HAVE_DVDCSS_DVDCSS_H 1


/* system headers */
#define HAVE_ALLOCA_H 1
#undef HAVE_ALSA_ASOUNDLIB_H
#define HAVE_ALTIVEC_H 0
#define HAVE_MALLOC_H 1
#define HAVE_SYS_MMAN_H 0
#define MAP_FAILED ((void *) -1)
#undef HAVE_SOUNDCARD_H
#undef HAVE_SYS_ASOUNDLIB_H
#undef HAVE_SYS_SOUNDCARD_H
#undef HAVE_SYS_SYSINFO_H

#undef HAVE_TERMIOS_H
#undef HAVE_SYS_TERMIOS_H
#define HAVE_WINSOCK2_H 0


/* system functions */
#undef HAVE_GETHOSTBYNAME2
#define HAVE_GETTIMEOFDAY 1
#undef HAVE_GLOB
#undef HAVE_LANGINFO

#define HAVE_MEMALIGN 1
#undef HAVE_NANOSLEEP
#undef HAVE_POSIX_SELECT
#define HAVE_AUDIO_SELECT 1
#define HAVE_SETENV 1
#define HAVE_SETMODE 0
#undef HAVE_SHM
#define HAVE_STRSEP 1


#undef HAVE_TERMCAP
#undef HAVE_TERMIOS
#define HAVE_VSSCANF 1


/* system-specific features */

#define HAVE_BUILTIN_EXPECT 1
#undef HAVE_LIBDL
#define HAVE_DOS_PATHS 0
#define EXTERN_ASM 
#define EXTERN_PREFIX ""
#define CONFIG_ICONV 1
#undef HAVE_LIBKSTAT



#define CONFIG_MEMALIGN_HACK 0
#undef CONFIG_PRIORITY


#undef HAVE_RTC
#undef CONFIG_UNRAR_EXEC


/* configurable options */
#define MSG_CHARSET "UTF-8"
#undef CONFIG_CRASH_DEBUG
#undef MP_DEBUG
#undef CONFIG_DYNAMIC_PLUGINS
#define CONFIG_FASTMEMCPY 1
#undef CONFIG_MENU
#define CONFIG_RUNTIME_CPUDETECT 0
#undef CONFIG_SIGHANDLER
#define CONFIG_SORTSUB 1
#define CONFIG_STREAM_CACHE 1
#undef PTHREAD_CACHE


/* CPU stuff */
#define __CPU__ ppc
#define HAVE_EBX_AVAILABLE 0
#define WORDS_BIGENDIAN 1
#define HAVE_BIGENDIAN 1
#define ARCH_X86 0
#define ARCH_IA64 0
#define ARCH_SPARC 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_SH4 0
#define ARCH_PPC 1
#define ARCH_ALPHA 0
#define ARCH_MIPS 0
#define ARCH_PA_RISC 0
#define ARCH_S390 0
#define ARCH_S390X 0
#define ARCH_VAX 0
#define ARCH_BFIN 0
#define ARCH_XTENSA 0
#define ARCH_TOMI 0
#define ARCH_GENERIC 0
#define ARCH_X86_32 0
#define ARCH_X86_64 0
#define ARCH_PPC64 0
#define HAVE_ALTIVEC 0
#define HAVE_PAIRED 1
#define HAVE_MMX 0
#define HAVE_MMX2 0
#define HAVE_AMD3DNOW 0
#define HAVE_AMD3DNOWEXT 0
#define HAVE_SSE 0
#define HAVE_SSE2 0
#define HAVE_SSSE3 0
#define HAVE_FAST_CMOV 0
#define HAVE_CMOV 0
#define HAVE_FAST_CLZ 1
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMVFP 0
#define HAVE_VFPV3 0
#define HAVE_NEON 0
#define HAVE_IWMMXT 0
#define HAVE_MMI 0
#define HAVE_VIS 0
#define HAVE_MVI 0


/* Blu-ray/DVD/VCD/CD */
#define DEFAULT_CDROM_DEVICE "/dev/di"
#define DEFAULT_DVD_DEVICE   "/dev/di"
#undef CONFIG_LIBBLURAY

#undef CONFIG_CDDB
#undef DVD_STRUCT_IN_SYS_CDIO_H
#undef CONFIG_CDDA
#undef DVD_STRUCT_IN_LINUX_CDROM_H
#undef DVD_STRUCT_IN_DVD_H




#undef DVD_STRUCT_IN_SYS_DVDIO_H
#define CONFIG_DVDNAV 1
#define CONFIG_DVDREAD 1

#undef CONFIG_LIBCDIO

#undef CONFIG_VCD


/* codec libraries */
#undef CONFIG_FAAC
#undef CONFIG_FAAD
#undef CONFIG_LIBA52
#undef CONFIG_LIBDCA
#undef CONFIG_LIBDV095
#undef CONFIG_LIBLZO
#undef CONFIG_LIBMPEG2
#undef CONFIG_LIBMPEG2_INTERNAL
#undef CONFIG_LIBMAD
#undef CONFIG_MP3LAME
#undef CONFIG_MP3LAME_PRESET
#undef CONFIG_MP3LAME_PRESET_MEDIUM
#undef CONFIG_MP3LIB
#undef CONFIG_MPG123
#undef CONFIG_MUSEPACK
#undef CONFIG_SPEEX
#undef CONFIG_OGGTHEORA
#undef CONFIG_TOOLAME
#define CONFIG_TREMOR 1
#undef CONFIG_TWOLAME
#define CONFIG_OGGVORBIS 1
#undef CONFIG_X264
#undef CONFIG_XVID4
#define CONFIG_ZLIB 1

#undef CONFIG_LIBNUT


/* binary codecs */
#undef CONFIG_QTX_CODECS
#undef CONFIG_QTX_CODECS_WIN32
#undef CONFIG_REALCODECS
#undef WIN32_LOADER
#undef CONFIG_WIN32DLL
#undef CONFIG_XANIM
#undef CONFIG_XMMS
#define BINARY_CODECS_PATH "codecs"
#define XMMS_INPUT_PLUGIN_DIR ""


/* GUI */
#undef CONFIG_GTK2
#undef CONFIG_GUI



/* Audio output drivers */
#undef CONFIG_ALSA



#undef CONFIG_ESD
#undef CONFIG_ESD_LATENCY


#undef CONFIG_NAS


#undef CONFIG_OSS_AUDIO
#define PATH_DEV_DSP ""
#define PATH_DEV_MIXER ""
#undef CONFIG_PULSE

#undef CONFIG_SUN_AUDIO


#undef CONFIG_LADSPA
#undef CONFIG_LIBBS2B


/* input */




#undef CONFIG_JOYSTICK
#undef CONFIG_LIRC
#undef CONFIG_LIRCC
#undef CONFIG_PVR
#undef CONFIG_RADIO
#undef CONFIG_RADIO_BSDBT848
#undef CONFIG_RADIO_CAPTURE
#undef CONFIG_RADIO_V4L
#undef CONFIG_RADIO_V4L2
#undef CONFIG_TV

#undef CONFIG_TV_DSHOW
#undef CONFIG_TV_V4L

#undef CONFIG_TV_V4L2


/* font stuff */
#define CONFIG_ASS 1
#define CONFIG_ASS_INTERNAL 1
#undef CONFIG_BITMAP_FONT
#undef CONFIG_ENCA
#undef CONFIG_FONTCONFIG
#define CONFIG_FREETYPE 1
#define CONFIG_FRIBIDI 1


/* networking */
#define HAVE_CLOSESOCKET 0
#define CONFIG_FTP 1
#undef HAVE_AF_INET6
#define HAVE_INET_ATON 1
#define HAVE_INET_PTON 0
#undef CONFIG_LIVE555
#undef CONFIG_LIBNEMESI
#define CONFIG_NETWORKING 1
#undef CONFIG_LIBSMBCLIENT
#define HAVE_SOCKLEN_T 1
#define HAVE_STRUCT_IPV6_MREQ 0
#define HAVE_STRUCT_SOCKADDR_IN6 0
#define HAVE_STRUCT_SOCKADDR_SA_LEN 0
#undef CONFIG_VSTREAM
#define HAVE_STRUCT_ADDRINFO 0
#define HAVE_GETADDRINFO 0
#define HAVE_STRUCT_SOCKADDR_STORAGE 0


/* libvo options */
#undef CONFIG_3DFX
#undef CONFIG_AA
#undef CONFIG_BL
#undef CONFIG_CACA

#undef CONFIG_DGA
#undef CONFIG_DGA1
#undef CONFIG_DGA2

#undef CONFIG_DIRECTFB

#undef CONFIG_DVB
#undef CONFIG_DVBIN 
#undef CONFIG_DXR2
#undef CONFIG_DXR3
#undef CONFIG_FBDEV
#undef CONFIG_GGI
#undef CONFIG_GGIWMH
#undef CONFIG_GIF
#undef CONFIG_GIF_4

#undef CONFIG_GL
#undef CONFIG_GL_WIN32
#undef CONFIG_GL_X11
#undef CONFIG_GL_SDL
#undef CONFIG_MATRIXVIEW
#undef CONFIG_IVTV
#undef CONFIG_JPEG

#undef CONFIG_MD5SUM
#undef CONFIG_MGA
#undef CONFIG_MNG
#undef CONFIG_POSTPROC
#undef CONFIG_PNG
#undef CONFIG_PNM

#undef CONFIG_S3FB
#undef CONFIG_SDL
#undef CONFIG_SDL_SDL_H
#undef CONFIG_SVGALIB
#undef CONFIG_TDFXFB
#undef CONFIG_XVR100
#undef CONFIG_TGA
#undef CONFIG_V4L2_DECODER
#define CONFIG_VDPAU 0
#undef CONFIG_VESA
#undef CONFIG_VIDIX
#undef CONFIG_VIDIX_DRV_CYBERBLADE
#undef CONFIG_VIDIX_DRV_IVTV
#undef CONFIG_VIDIX_DRV_MACH64
#undef CONFIG_VIDIX_DRV_MGA
#undef CONFIG_VIDIX_DRV_MGA_CRTC2
#undef CONFIG_VIDIX_DRV_NVIDIA
#undef CONFIG_VIDIX_DRV_PM3
#undef CONFIG_VIDIX_DRV_RADEON
#undef CONFIG_VIDIX_DRV_RAGE128
#undef CONFIG_VIDIX_DRV_S3
#undef CONFIG_VIDIX_DRV_SH_VEU
#undef CONFIG_VIDIX_DRV_SIS
#undef CONFIG_VIDIX_DRV_UNICHROME

#undef CONFIG_XF86VM
#undef CONFIG_WII
#undef CONFIG_X11
#undef CONFIG_XDPMS
#undef CONFIG_XF86XK
#undef CONFIG_XINERAMA
#undef CONFIG_XMGA
#undef CONFIG_XSS
#undef CONFIG_XV
#define CONFIG_XVMC 0

#undef CONFIG_YUV4MPEG
#undef CONFIG_ZR


/* FFmpeg */
#define CONFIG_FFMPEG 1
#define CONFIG_FFMPEG_A 1


#define CONFIG_DECODERS 1
#define CONFIG_ENCODERS 0
#define CONFIG_DEMUXERS 1
#define CONFIG_MUXERS 0
#define CONFIG_RTPDEC 0

#define HAVE_ARPA_INET_H 0
#define HAVE_BSWAP 0
#define CONFIG_BZLIB 0
#define HAVE_DCBZL 0
#define HAVE_CBRTF 1
#define HAVE_EXP2 1
#define HAVE_EXP2F 1
#define HAVE_FAST_64BIT 0
#define HAVE_FAST_UNALIGNED 1
#define HAVE_GNU_AS 0
#define CONFIG_HARDCODED_TABLES 0
#define HAVE_IBM_ASM 0
#define CONFIG_MPEGAUDIO_HP 0
#define HAVE_LLRINT 1
#define HAVE_LLRINTF 1
#define HAVE_LOCAL_ALIGNED_8 1
#define HAVE_LOCAL_ALIGNED_16 1
#define HAVE_LOG2 1
#define HAVE_LOG2F 1
#define HAVE_LRINT 1
#define HAVE_LRINTF 1
#define CONFIG_MLIB 0
#define HAVE_MKSTEMP 1
#define HAVE_MMAP 0
#define CONFIG_NETWORK 1
#define CONFIG_PIC 0
#define HAVE_POLL_H 0
#define HAVE_POSIX_MEMALIGN 0
#define HAVE_PTHREADS 0
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_THREADS 0
#define HAVE_TRUNC 1
#define HAVE_TRUNCF 1

#define HAVE_W32THREADS 0
#define HAVE_XFORM_ASM 0
#define HAVE_XMM_CLOBBERS 0
#define HAVE_YASM 0

#define CONFIG_AUDIO_FLOAT 0
#define CONFIG_AVSERVER 0
#define CONFIG_FASTDIV 1
#define CONFIG_FFSERVER 0
#define CONFIG_GNUTLS 0
#define CONFIG_GPL 1
#define CONFIG_GRAY 0
#define CONFIG_LIBMODPLUG 0
#define CONFIG_LIBVORBIS 0
#define CONFIG_OPENSSL 0
#define CONFIG_POWERPC_PERF 0
/* For now prefer speed over avoiding potential invalid reads */
#define CONFIG_SAFE_BITSTREAM_READER 0
#define CONFIG_SHARED 0
#define CONFIG_SMALL 0
#define CONFIG_SWSCALE_ALPHA 1

#define HAVE_ALIGNED_STACK 0
#define HAVE_ATTRIBUTE_PACKED 1
#define HAVE_AVX 0
#define HAVE_GETHRTIME 0
#define HAVE_INLINE_ASM 0
#define HAVE_ISATTY 0
#define HAVE_LDBRX 0
#define HAVE_LOCALTIME_R 0
#define HAVE_MAPVIEWOFFILE 0
#define HAVE_PPC4XX 0
#define HAVE_STRERROR_R 0
#define HAVE_STRPTIME 0
#define HAVE_SYMVER_ASM_LABEL 0
#define HAVE_SYMVER_GNU_ASM 0
#define HAVE_SYS_SELECT_H 0
#define HAVE_VIRTUALALLOC 0

/* Some FFmpeg codecs depend on these. Enable them unconditionally for now. */
#define CONFIG_AANDCT 1
#define CONFIG_DCT 1
#define CONFIG_DWT 1
#define CONFIG_FFT 1
#define CONFIG_GOLOMB 1
#define CONFIG_H264DSP 1
#define CONFIG_H264PRED 1
#define CONFIG_HUFFMAN 1
#define CONFIG_LPC 1
#define CONFIG_MDCT 1
#define CONFIG_RDFT 1

/* Use these registers in FFmpeg x86 inline asm. No proper detection yet. */
#ifndef MP_DEBUG
#define HAVE_EBP_AVAILABLE 0
#else
#define HAVE_EBP_AVAILABLE 0
#endif

#define FFMPEG_CONFIGURATION "--enable-gpl --enable-postproc"
#define FFMPEG_LICENSE "GPL version 2 or later"

#define LIBAV_CONFIGURATION FFMPEG_CONFIGURATION
#define LIBAV_LICENSE FFMPEG_LICENSE

/* External libraries used through FFmpeg. */
#define CONFIG_CRYSTALHD 0
#define CONFIG_LIBFAAC 0
#define CONFIG_LIBDIRAC 0
#define CONFIG_LIBGSM 0
#define CONFIG_LIBOPENCORE_AMRNB 0
#define CONFIG_LIBOPENCORE_AMRWB 0
#define CONFIG_LIBOPENJPEG 0
#define CONFIG_LIBRTMP 0
#define CONFIG_LIBSCHROEDINGER 0
#define CONFIG_LIBMP3LAME 0
#define CONFIG_LIBX264 0
#define CONFIG_LIBXVID 0

#define CONFIG_AASC_DECODER 1
#define CONFIG_AMV_DECODER 1
#define CONFIG_ANM_DECODER 1
#define CONFIG_ANSI_DECODER 1
#define CONFIG_ASV1_DECODER 1
#define CONFIG_ASV2_DECODER 1
#define CONFIG_AURA_DECODER 1
#define CONFIG_AURA2_DECODER 1
#define CONFIG_AVS_DECODER 1
#define CONFIG_BETHSOFTVID_DECODER 1
#define CONFIG_BFI_DECODER 1
#define CONFIG_BINK_DECODER 1
#define CONFIG_BMP_DECODER 1
#define CONFIG_BMV_VIDEO_DECODER 0
#define CONFIG_BMV_AUDIO_DECODER 0
#define CONFIG_C93_DECODER 1
#define CONFIG_CAVS_DECODER 1
#define CONFIG_CDGRAPHICS_DECODER 1
#define CONFIG_CINEPAK_DECODER 1
#define CONFIG_CLJR_DECODER 1
#define CONFIG_CSCD_DECODER 1
#define CONFIG_CYUV_DECODER 1
#define CONFIG_DFA_DECODER 1
#define CONFIG_DNXHD_DECODER 1
#define CONFIG_DPX_DECODER 1
#define CONFIG_DSICINVIDEO_DECODER 1
#define CONFIG_DVVIDEO_DECODER 1
#define CONFIG_DXA_DECODER 1
#define CONFIG_EACMV_DECODER 1
#define CONFIG_EAMAD_DECODER 1
#define CONFIG_EATGQ_DECODER 1
#define CONFIG_EATGV_DECODER 1
#define CONFIG_EATQI_DECODER 1
#define CONFIG_EIGHTBPS_DECODER 1
#define CONFIG_EIGHTSVX_EXP_DECODER 1
#define CONFIG_EIGHTSVX_FIB_DECODER 1
#define CONFIG_ESCAPE124_DECODER 1
#define CONFIG_FFV1_DECODER 1
#define CONFIG_FFVHUFF_DECODER 1
#define CONFIG_FLASHSV_DECODER 1
#define CONFIG_FLASHSV2_DECODER 1
#define CONFIG_FLIC_DECODER 1
#define CONFIG_FLV_DECODER 1
#define CONFIG_FOURXM_DECODER 1
#define CONFIG_FRAPS_DECODER 1
#define CONFIG_FRWU_DECODER 1
#define CONFIG_GIF_DECODER 1
#define CONFIG_H261_DECODER 1
#define CONFIG_H263_DECODER 1
#define CONFIG_H263I_DECODER 1
#define CONFIG_H264_DECODER 1
#define CONFIG_H264_VDPAU_DECODER 0
#define CONFIG_HUFFYUV_DECODER 1
#define CONFIG_IDCIN_DECODER 1
#define CONFIG_IFF_BYTERUN1_DECODER 1
#define CONFIG_IFF_ILBM_DECODER 1
#define CONFIG_INDEO2_DECODER 1
#define CONFIG_INDEO3_DECODER 1
#define CONFIG_INDEO4_DECODER 1
#define CONFIG_INDEO5_DECODER 1
#define CONFIG_INTERPLAY_VIDEO_DECODER 1
#define CONFIG_JPEGLS_DECODER 1
#define CONFIG_JV_DECODER 1
#define CONFIG_KGV1_DECODER 1
#define CONFIG_KMVC_DECODER 1
#define CONFIG_LAGARITH_DECODER 1
#define CONFIG_LOCO_DECODER 1
#define CONFIG_MDEC_DECODER 1
#define CONFIG_MIMIC_DECODER 1
#define CONFIG_MJPEG_DECODER 1
#define CONFIG_MJPEGB_DECODER 1
#define CONFIG_MMVIDEO_DECODER 1
#define CONFIG_MOTIONPIXELS_DECODER 1
#define CONFIG_MPEG_XVMC_DECODER 0
#define CONFIG_MPEG1VIDEO_DECODER 1
#define CONFIG_MPEG2VIDEO_DECODER 1
#define CONFIG_MPEG4_DECODER 1
#define CONFIG_MPEG4_VDPAU_DECODER 0
#define CONFIG_MPEGVIDEO_DECODER 1
#define CONFIG_MPEG_VDPAU_DECODER 0
#define CONFIG_MPEG1_VDPAU_DECODER 0
#define CONFIG_MSMPEG4V1_DECODER 1
#define CONFIG_MSMPEG4V2_DECODER 1
#define CONFIG_MSMPEG4V3_DECODER 1
#define CONFIG_MSRLE_DECODER 1
#define CONFIG_MSVIDEO1_DECODER 1
#define CONFIG_MSZH_DECODER 1
#define CONFIG_MXPEG_DECODER 1
#define CONFIG_NUV_DECODER 1
#define CONFIG_PAM_DECODER 1
#define CONFIG_PBM_DECODER 1
#define CONFIG_PCM_S8_PLANAR_DECODER 1
#define CONFIG_PCX_DECODER 1
#define CONFIG_PGM_DECODER 1
#define CONFIG_PGMYUV_DECODER 1
#define CONFIG_PICTOR_DECODER 1
#define CONFIG_PNG_DECODER 0
#define CONFIG_PPM_DECODER 1
#define CONFIG_PRORES_DECODER 0
#define CONFIG_PTX_DECODER 1
#define CONFIG_QDRAW_DECODER 1
#define CONFIG_QPEG_DECODER 1
#define CONFIG_QTRLE_DECODER 1
#define CONFIG_R10K_DECODER 1
#define CONFIG_R210_DECODER 1
#define CONFIG_RAWVIDEO_DECODER 1
#define CONFIG_RL2_DECODER 1
#define CONFIG_ROQ_DECODER 1
#define CONFIG_RPZA_DECODER 1
#define CONFIG_RV10_DECODER 1
#define CONFIG_RV20_DECODER 1
#define CONFIG_RV30_DECODER 1
#define CONFIG_RV40_DECODER 1
#define CONFIG_S302M_DECODER 1
#define CONFIG_SGI_DECODER 1
#define CONFIG_SMACKER_DECODER 1
#define CONFIG_SMC_DECODER 1
#define CONFIG_SNOW_DECODER 1
#define CONFIG_SP5X_DECODER 1
#define CONFIG_SUNRAST_DECODER 1
#define CONFIG_SVQ1_DECODER 1
#define CONFIG_SVQ3_DECODER 1
#define CONFIG_TARGA_DECODER 1
#define CONFIG_THEORA_DECODER 1
#define CONFIG_THP_DECODER 1
#define CONFIG_TIERTEXSEQVIDEO_DECODER 1
#define CONFIG_TIFF_DECODER 1
#define CONFIG_TMV_DECODER 1
#define CONFIG_TRUEMOTION1_DECODER 1
#define CONFIG_TRUEMOTION2_DECODER 1
#define CONFIG_TSCC_DECODER 1
#define CONFIG_TXD_DECODER 1
#define CONFIG_ULTI_DECODER 1
#define CONFIG_UTVIDEO_DECODER 0
#define CONFIG_V210_DECODER 1
#define CONFIG_V210X_DECODER 1
#define CONFIG_V308_DECODER 0
#define CONFIG_VB_DECODER 1
#define CONFIG_VBLE_DECODER 0
#define CONFIG_VC1_DECODER 1
#define CONFIG_VC1_VDPAU_DECODER 0
#define CONFIG_VC1IMAGE_DECODER 0
#define CONFIG_VCR1_DECODER 1
#define CONFIG_VMDVIDEO_DECODER 1
#define CONFIG_VMNC_DECODER 1
#define CONFIG_VP3_DECODER 1
#define CONFIG_VP5_DECODER 1
#define CONFIG_VP6_DECODER 1
#define CONFIG_VP6A_DECODER 1
#define CONFIG_VP6F_DECODER 1
#define CONFIG_VP8_DECODER 1
#define CONFIG_VQA_DECODER 1
#define CONFIG_WMV1_DECODER 1
#define CONFIG_WMV2_DECODER 1
#define CONFIG_WMV3_DECODER 1
#define CONFIG_WMV3_VDPAU_DECODER 0
#define CONFIG_WMV3IMAGE_DECODER 0
#define CONFIG_WNV1_DECODER 1
#define CONFIG_XAN_WC3_DECODER 0
#define CONFIG_XAN_WC4_DECODER 0
#define CONFIG_XL_DECODER 1
#define CONFIG_YOP_DECODER 1
#define CONFIG_Y41P_DECODER 0
#define CONFIG_YUV4_DECODER 0
#define CONFIG_ZLIB_DECODER 1
#define CONFIG_ZMBV_DECODER 1
#define CONFIG_AAC_DECODER 1
#define CONFIG_AAC_LATM_DECODER 1
#define CONFIG_AC3_DECODER 1
#define CONFIG_ALAC_DECODER 1
#define CONFIG_ALS_DECODER 1
#define CONFIG_AMRNB_DECODER 1
#define CONFIG_AMRWB_DECODER 1
#define CONFIG_APE_DECODER 1
#define CONFIG_ATRAC1_DECODER 1
#define CONFIG_ATRAC3_DECODER 1
#define CONFIG_AVRP_DECODER 0
#define CONFIG_BINKAUDIO_DCT_DECODER 1
#define CONFIG_BINKAUDIO_RDFT_DECODER 1
#define CONFIG_COOK_DECODER 1
#define CONFIG_DCA_DECODER 1
#define CONFIG_DSICINAUDIO_DECODER 1
#define CONFIG_EAC3_DECODER 1
#define CONFIG_FLAC_DECODER 1
#define CONFIG_GSM_DECODER 1
#define CONFIG_GSM_MS_DECODER 1
#define CONFIG_IMC_DECODER 1
#define CONFIG_MACE3_DECODER 1
#define CONFIG_MACE6_DECODER 1
#define CONFIG_MLP_DECODER 1
#define CONFIG_MP1_DECODER 1
#define CONFIG_MP1FLOAT_DECODER 0
#define CONFIG_MP2_DECODER 1
#define CONFIG_MP2FLOAT_DECODER 0
#define CONFIG_MP3_DECODER 1
#define CONFIG_MP3FLOAT_DECODER 0
#define CONFIG_MP3ADU_DECODER 1
#define CONFIG_MP3ADUFLOAT_DECODER 0
#define CONFIG_MP3ON4_DECODER 1
#define CONFIG_MP3ON4FLOAT_DECODER 0
#define CONFIG_MPC7_DECODER 1
#define CONFIG_MPC8_DECODER 1
#define CONFIG_NELLYMOSER_DECODER 1
#define CONFIG_QCELP_DECODER 1
#define CONFIG_QDM2_DECODER 1
#define CONFIG_RA_144_DECODER 1
#define CONFIG_RA_288_DECODER 1
#define CONFIG_SHORTEN_DECODER 1
#define CONFIG_SIPR_DECODER 1
#define CONFIG_SMACKAUD_DECODER 1
#define CONFIG_SONIC_DECODER 1
#define CONFIG_TRUEHD_DECODER 1
#define CONFIG_TRUESPEECH_DECODER 1
#define CONFIG_TTA_DECODER 1
#define CONFIG_TWINVQ_DECODER 1
#define CONFIG_VMDAUDIO_DECODER 1
#define CONFIG_VORBIS_DECODER 1
#define CONFIG_WAVPACK_DECODER 1
#define CONFIG_WMAPRO_DECODER 1
#define CONFIG_WMAV1_DECODER 1
#define CONFIG_WMAV2_DECODER 1
#define CONFIG_WMAVOICE_DECODER 1
#define CONFIG_WS_SND1_DECODER 1
#define CONFIG_PCM_ALAW_DECODER 1
#define CONFIG_PCM_BLURAY_DECODER 1
#define CONFIG_PCM_DVD_DECODER 1
#define CONFIG_PCM_F32BE_DECODER 1
#define CONFIG_PCM_F32LE_DECODER 1
#define CONFIG_PCM_F64BE_DECODER 1
#define CONFIG_PCM_F64LE_DECODER 1
#define CONFIG_PCM_LXF_DECODER 1
#define CONFIG_PCM_MULAW_DECODER 1
#define CONFIG_PCM_S8_DECODER 1
#define CONFIG_PCM_S16BE_DECODER 1
#define CONFIG_PCM_S16LE_DECODER 1
#define CONFIG_PCM_S16LE_PLANAR_DECODER 1
#define CONFIG_PCM_S24BE_DECODER 1
#define CONFIG_PCM_S24DAUD_DECODER 1
#define CONFIG_PCM_S24LE_DECODER 1
#define CONFIG_PCM_S32BE_DECODER 1
#define CONFIG_PCM_S32LE_DECODER 1
#define CONFIG_PCM_U8_DECODER 1
#define CONFIG_PCM_U16BE_DECODER 1
#define CONFIG_PCM_U16LE_DECODER 1
#define CONFIG_PCM_U24BE_DECODER 1
#define CONFIG_PCM_U24LE_DECODER 1
#define CONFIG_PCM_U32BE_DECODER 1
#define CONFIG_PCM_U32LE_DECODER 1
#define CONFIG_PCM_ZORK_DECODER 1
#define CONFIG_INTERPLAY_DPCM_DECODER 1
#define CONFIG_ROQ_DPCM_DECODER 1
#define CONFIG_SOL_DPCM_DECODER 1
#define CONFIG_XAN_DPCM_DECODER 1
#define CONFIG_ADPCM_4XM_DECODER 1
#define CONFIG_ADPCM_ADX_DECODER 1
#define CONFIG_ADPCM_CT_DECODER 1
#define CONFIG_ADPCM_EA_DECODER 1
#define CONFIG_ADPCM_EA_MAXIS_XA_DECODER 1
#define CONFIG_ADPCM_EA_R1_DECODER 1
#define CONFIG_ADPCM_EA_R2_DECODER 1
#define CONFIG_ADPCM_EA_R3_DECODER 1
#define CONFIG_ADPCM_EA_XAS_DECODER 1
#define CONFIG_ADPCM_G722_DECODER 1
#define CONFIG_ADPCM_G726_DECODER 1
#define CONFIG_ADPCM_IMA_AMV_DECODER 1
#define CONFIG_ADPCM_IMA_DK3_DECODER 1
#define CONFIG_ADPCM_IMA_DK4_DECODER 1
#define CONFIG_ADPCM_IMA_EA_EACS_DECODER 1
#define CONFIG_ADPCM_IMA_EA_SEAD_DECODER 1
#define CONFIG_ADPCM_IMA_ISS_DECODER 1
#define CONFIG_ADPCM_IMA_QT_DECODER 1
#define CONFIG_ADPCM_IMA_SMJPEG_DECODER 1
#define CONFIG_ADPCM_IMA_WAV_DECODER 1
#define CONFIG_ADPCM_IMA_WS_DECODER 1
#define CONFIG_ADPCM_MS_DECODER 1
#define CONFIG_ADPCM_SBPRO_2_DECODER 1
#define CONFIG_ADPCM_SBPRO_3_DECODER 1
#define CONFIG_ADPCM_SBPRO_4_DECODER 1
#define CONFIG_ADPCM_SWF_DECODER 1
#define CONFIG_ADPCM_THP_DECODER 1
#define CONFIG_ADPCM_XA_DECODER 1
#define CONFIG_ADPCM_YAMAHA_DECODER 1
#define CONFIG_ASS_DECODER 1
#define CONFIG_DVBSUB_DECODER 1
#define CONFIG_DVDSUB_DECODER 1
#define CONFIG_PGSSUB_DECODER 1
#define CONFIG_SRT_DECODER 1
#define CONFIG_XSUB_DECODER 1
#define CONFIG_LIBDIRAC_DECODER 0
#define CONFIG_LIBGSM_DECODER 0
#define CONFIG_LIBGSM_MS_DECODER 0
#define CONFIG_LIBOPENCORE_AMRNB_DECODER 0
#define CONFIG_LIBOPENCORE_AMRWB_DECODER 0
#define CONFIG_LIBOPENJPEG_DECODER 0
#define CONFIG_LIBSCHROEDINGER_DECODER 0
#define CONFIG_LIBSPEEX_DECODER 0
#define CONFIG_LIBVPX_DECODER 0
#define CONFIG_DIRAC_DECODER 0
#define CONFIG_DXTORY_DECODER 0
#define CONFIG_ESCAPE130_DECODER 0
#define CONFIG_H264_CRYSTALHD_DECODER 0
#define CONFIG_JPEG2000_DECODER 1
#define CONFIG_MPEG4_CRYSTALHD_DECODER 0
#define CONFIG_MPEG2_CRYSTALHD_DECODER 0
#define CONFIG_MSMPEG4_CRYSTALHD_DECODER 0
#define CONFIG_PRORES_LGPL_DECODER 0
#define CONFIG_V410_DECODER 0
#define CONFIG_VC1_CRYSTALHD_DECODER 0
#define CONFIG_WMV3_CRYSTALHD_DECODER 0
#define CONFIG_FFWAVESYNTH_DECODER 0
#define CONFIG_G723_1_DECODER 0
#define CONFIG_G729_DECODER 0
#define CONFIG_WMALOSSLESS_DECODER 0
#define CONFIG_LIBCELT_DECODER 0
#define CONFIG_LIBSTAGEFRIGHT_H264_DECODER 0
#define CONFIG_LIBUTVIDEO_DECODER 0
#define CONFIG_BINTEXT_DECODER 0
#define CONFIG_XBIN_DECODER 0
#define CONFIG_IDF_DECODER 0
#define CONFIG_ADPCM_IMA_APC_DECODER 0
#define CONFIG_AYUV_DECODER 0
#define CONFIG_V408_DECODER 0
#define CONFIG_XWD_DECODER 0
#define CONFIG_CDXL_DECODER 0
#define CONFIG_ZEROCODEC_DECODER 0
#define CONFIG_RALF_DECODER 0
#define CONFIG_XBM_DECODER 0
#define CONFIG_EXR_DECODER 0
#define CONFIG_AVUI_DECODER 0
#define CONFIG_JACOSUB_DECODER 0
#define CONFIG_MICRODVD_DECODER 0
#define CONFIG_LIBVORBIS_DECODER 0
#define CONFIG_A64MULTI_ENCODER 0
#define CONFIG_A64MULTI5_ENCODER 0
#define CONFIG_ASV1_ENCODER 0
#define CONFIG_ASV2_ENCODER 0
#define CONFIG_BMP_ENCODER 0
#define CONFIG_DNXHD_ENCODER 0
#define CONFIG_DPX_ENCODER 0
#define CONFIG_EAC3_ENCODER 0
#define CONFIG_DVVIDEO_ENCODER 0
#define CONFIG_FFV1_ENCODER 0
#define CONFIG_FFVHUFF_ENCODER 0
#define CONFIG_FLASHSV_ENCODER 0
#define CONFIG_FLV_ENCODER 0
#define CONFIG_GIF_ENCODER 0
#define CONFIG_H261_ENCODER 0
#define CONFIG_H263_ENCODER 0
#define CONFIG_H263P_ENCODER 0
#define CONFIG_HUFFYUV_ENCODER 0
#define CONFIG_JPEGLS_ENCODER 0
#define CONFIG_LJPEG_ENCODER 0
#define CONFIG_MJPEG_ENCODER 0
#define CONFIG_MPEG1VIDEO_ENCODER 0
#define CONFIG_MPEG2VIDEO_ENCODER 0
#define CONFIG_MPEG4_ENCODER 0
#define CONFIG_MSMPEG4V1_ENCODER 0
#define CONFIG_MSMPEG4V2_ENCODER 0
#define CONFIG_MSMPEG4V3_ENCODER 0
#define CONFIG_PAM_ENCODER 0
#define CONFIG_PBM_ENCODER 0
#define CONFIG_PCX_ENCODER 0
#define CONFIG_PGM_ENCODER 0
#define CONFIG_PGMYUV_ENCODER 0
#define CONFIG_PNG_ENCODER 0
#define CONFIG_PPM_ENCODER 0
#define CONFIG_QTRLE_ENCODER 0
#define CONFIG_RAWVIDEO_ENCODER 0
#define CONFIG_ROQ_ENCODER 0
#define CONFIG_RV10_ENCODER 0
#define CONFIG_RV20_ENCODER 0
#define CONFIG_SGI_ENCODER 0
#define CONFIG_SNOW_ENCODER 0
#define CONFIG_SVQ1_ENCODER 0
#define CONFIG_TARGA_ENCODER 0
#define CONFIG_TIFF_ENCODER 0
#define CONFIG_V210_ENCODER 0
#define CONFIG_WMV1_ENCODER 0
#define CONFIG_WMV2_ENCODER 0
#define CONFIG_ZLIB_ENCODER 0
#define CONFIG_ZMBV_ENCODER 0
#define CONFIG_AAC_ENCODER 0
#define CONFIG_AC3_ENCODER 0
#define CONFIG_AC3_FIXED_ENCODER 0
#define CONFIG_ALAC_ENCODER 0
#define CONFIG_FLAC_ENCODER 0
#define CONFIG_MP2_ENCODER 0
#define CONFIG_NELLYMOSER_ENCODER 0
#define CONFIG_RA_144_ENCODER 0
#define CONFIG_SONIC_ENCODER 0
#define CONFIG_SONIC_LS_ENCODER 0
#define CONFIG_VORBIS_ENCODER 0
#define CONFIG_WMAV1_ENCODER 0
#define CONFIG_WMAV2_ENCODER 0
#define CONFIG_PCM_ALAW_ENCODER 0
#define CONFIG_PCM_F32BE_ENCODER 0
#define CONFIG_PCM_F32LE_ENCODER 0
#define CONFIG_PCM_F64BE_ENCODER 0
#define CONFIG_PCM_F64LE_ENCODER 0
#define CONFIG_PCM_MULAW_ENCODER 0
#define CONFIG_PCM_S8_ENCODER 0
#define CONFIG_PCM_S16BE_ENCODER 0
#define CONFIG_PCM_S16LE_ENCODER 0
#define CONFIG_PCM_S24BE_ENCODER 0
#define CONFIG_PCM_S24DAUD_ENCODER 0
#define CONFIG_PCM_S24LE_ENCODER 0
#define CONFIG_PCM_S32BE_ENCODER 0
#define CONFIG_PCM_S32LE_ENCODER 0
#define CONFIG_PCM_U8_ENCODER 0
#define CONFIG_PCM_U16BE_ENCODER 0
#define CONFIG_PCM_U16LE_ENCODER 0
#define CONFIG_PCM_U24BE_ENCODER 0
#define CONFIG_PCM_U24LE_ENCODER 0
#define CONFIG_PCM_U32BE_ENCODER 0
#define CONFIG_PCM_U32LE_ENCODER 0
#define CONFIG_PCM_ZORK_ENCODER 0
#define CONFIG_ROQ_DPCM_ENCODER 0
#define CONFIG_ADPCM_ADX_ENCODER 0
#define CONFIG_ADPCM_G722_ENCODER 0
#define CONFIG_ADPCM_G726_ENCODER 0
#define CONFIG_ADPCM_IMA_QT_ENCODER 0
#define CONFIG_ADPCM_IMA_WAV_ENCODER 0
#define CONFIG_ADPCM_MS_ENCODER 0
#define CONFIG_ADPCM_SWF_ENCODER 0
#define CONFIG_ADPCM_YAMAHA_ENCODER 0
#define CONFIG_ASS_ENCODER 0
#define CONFIG_DVBSUB_ENCODER 0
#define CONFIG_DVDSUB_ENCODER 0
#define CONFIG_XSUB_ENCODER 0
#define CONFIG_LIBDIRAC_ENCODER 0
#define CONFIG_LIBFAAC_ENCODER 0
#define CONFIG_LIBGSM_ENCODER 0
#define CONFIG_LIBGSM_MS_ENCODER 0
#define CONFIG_LIBMP3LAME_ENCODER 0
#define CONFIG_LIBOPENCORE_AMRNB_ENCODER 0
#define CONFIG_LIBSCHROEDINGER_ENCODER 0
#define CONFIG_LIBSPEEX_ENCODER 0
#define CONFIG_LIBTHEORA_ENCODER 0
#define CONFIG_LIBUTVIDEO_ENCODER 0
#define CONFIG_LIBVO_AACENC_ENCODER 0
#define CONFIG_LIBVO_AMRWBENC_ENCODER 0
#define CONFIG_LIBVORBIS_ENCODER 0
#define CONFIG_LIBVPX_ENCODER 0
#define CONFIG_LIBX264_ENCODER 0
#define CONFIG_LIBXAVS_ENCODER 0
#define CONFIG_LIBXVID_ENCODER 0
#define CONFIG_AMV_ENCODER 0
#define CONFIG_CLJR_ENCODER 0
#define CONFIG_FLASHSV2_ENCODER 0
#define CONFIG_JPEG2000_ENCODER 0
#define CONFIG_MSVIDEO1_ENCODER 0
#define CONFIG_PRORES_ENCODER 0
#define CONFIG_V308_ENCODER 0
#define CONFIG_V410_ENCODER 0
#define CONFIG_Y41P_ENCODER 0
#define CONFIG_YUV4_ENCODER 0
#define CONFIG_DCA_ENCODER 0
#define CONFIG_G723_1_ENCODER 0
#define CONFIG_SRT_ENCODER 0
#define CONFIG_LIBAACPLUS_ENCODER 0
#define CONFIG_LIBOPENJPEG_ENCODER 0
#define CONFIG_LIBX264RGB_ENCODER 0
#define CONFIG_AVRP_ENCODER 0
#define CONFIG_AYUV_ENCODER 0
#define CONFIG_R10K_ENCODER 0
#define CONFIG_R210_ENCODER 0
#define CONFIG_V408_ENCODER 0
#define CONFIG_XWD_ENCODER 0
#define CONFIG_PRORES_ANATOLIY_ENCODER 0
#define CONFIG_PRORES_KOSTYA_ENCODER 0
#define CONFIG_SUNRAST_ENCODER 0
#define CONFIG_XBM_ENCODER 0
#define CONFIG_AVUI_ENCODER 0
#define CONFIG_AAC_PARSER 1
#define CONFIG_AAC_LATM_PARSER 1
#define CONFIG_AC3_PARSER 1
#define CONFIG_ADX_PARSER 1
#define CONFIG_CAVSVIDEO_PARSER 1
#define CONFIG_DCA_PARSER 1
#define CONFIG_DIRAC_PARSER 1
#define CONFIG_DNXHD_PARSER 1
#define CONFIG_DVBSUB_PARSER 1
#define CONFIG_DVDSUB_PARSER 1
#define CONFIG_FLAC_PARSER 1
#define CONFIG_GSM_PARSER 1
#define CONFIG_H261_PARSER 1
#define CONFIG_H263_PARSER 1
#define CONFIG_H264_PARSER 1
#define CONFIG_MJPEG_PARSER 1
#define CONFIG_MLP_PARSER 1
#define CONFIG_MPEG4VIDEO_PARSER 1
#define CONFIG_MPEGAUDIO_PARSER 1
#define CONFIG_MPEGVIDEO_PARSER 1
#define CONFIG_PNM_PARSER 1
#define CONFIG_RV30_PARSER 1
#define CONFIG_RV40_PARSER 1
#define CONFIG_VC1_PARSER 1
#define CONFIG_VP3_PARSER 1
#define CONFIG_VP8_PARSER 1
#define CONFIG_VORBIS_PARSER 0
#define CONFIG_COOK_PARSER 0
#define CONFIG_PNG_PARSER 0
#define CONFIG_AAC_DEMUXER 1
#define CONFIG_AC3_DEMUXER 1
#define CONFIG_AEA_DEMUXER 1
#define CONFIG_AIFF_DEMUXER 1
#define CONFIG_AMR_DEMUXER 1
#define CONFIG_ANM_DEMUXER 1
#define CONFIG_APC_DEMUXER 1
#define CONFIG_APE_DEMUXER 1
#define CONFIG_APPLEHTTP_DEMUXER 1
#define CONFIG_ASF_DEMUXER 1
#define CONFIG_ASS_DEMUXER 1
#define CONFIG_AU_DEMUXER 1
#define CONFIG_AVI_DEMUXER 1
#define CONFIG_AVISYNTH_DEMUXER 0
#define CONFIG_AVS_DEMUXER 1
#define CONFIG_BETHSOFTVID_DEMUXER 1
#define CONFIG_BFI_DEMUXER 1
#define CONFIG_BINK_DEMUXER 1
#define CONFIG_BMV_DEMUXER 0
#define CONFIG_C93_DEMUXER 1
#define CONFIG_CAF_DEMUXER 1
#define CONFIG_CAVSVIDEO_DEMUXER 1
#define CONFIG_CDG_DEMUXER 1
#define CONFIG_DAUD_DEMUXER 1
#define CONFIG_DFA_DEMUXER 1
#define CONFIG_DIRAC_DEMUXER 1
#define CONFIG_DNXHD_DEMUXER 1
#define CONFIG_DSICIN_DEMUXER 1
#define CONFIG_DTS_DEMUXER 1
#define CONFIG_DV_DEMUXER 1
#define CONFIG_DXA_DEMUXER 1
#define CONFIG_EA_DEMUXER 1
#define CONFIG_EA_CDATA_DEMUXER 1
#define CONFIG_EAC3_DEMUXER 1
#define CONFIG_FFM_DEMUXER 1
#define CONFIG_FFMETADATA_DEMUXER 1
#define CONFIG_FILMSTRIP_DEMUXER 1
#define CONFIG_FLAC_DEMUXER 1
#define CONFIG_FLIC_DEMUXER 1
#define CONFIG_FLV_DEMUXER 1
#define CONFIG_FOURXM_DEMUXER 1
#define CONFIG_G722_DEMUXER 1
#define CONFIG_GSM_DEMUXER 1
#define CONFIG_GXF_DEMUXER 1
#define CONFIG_H261_DEMUXER 1
#define CONFIG_H263_DEMUXER 1
#define CONFIG_H264_DEMUXER 1
#define CONFIG_IDCIN_DEMUXER 1
#define CONFIG_IFF_DEMUXER 1
#define CONFIG_IMAGE2_DEMUXER 1
#define CONFIG_IMAGE2PIPE_DEMUXER 1
#define CONFIG_INGENIENT_DEMUXER 1
#define CONFIG_IPMOVIE_DEMUXER 1
#define CONFIG_ISS_DEMUXER 1
#define CONFIG_IV8_DEMUXER 1
#define CONFIG_IVF_DEMUXER 1
#define CONFIG_JV_DEMUXER 1
#define CONFIG_LATM_DEMUXER 0
#define CONFIG_LMLM4_DEMUXER 1
#define CONFIG_LXF_DEMUXER 1
#define CONFIG_M4V_DEMUXER 1
#define CONFIG_MATROSKA_DEMUXER 1
#define CONFIG_MJPEG_DEMUXER 1
#define CONFIG_MLP_DEMUXER 1
#define CONFIG_MM_DEMUXER 1
#define CONFIG_MMF_DEMUXER 1
#define CONFIG_MOV_DEMUXER 1
#define CONFIG_MP3_DEMUXER 1
#define CONFIG_MPC_DEMUXER 1
#define CONFIG_MPC8_DEMUXER 1
#define CONFIG_MPEGPS_DEMUXER 1
#define CONFIG_MPEGTS_DEMUXER 1
#define CONFIG_MPEGTSRAW_DEMUXER 1
#define CONFIG_MPEGVIDEO_DEMUXER 1
#define CONFIG_MSNWC_TCP_DEMUXER 1
#define CONFIG_MTV_DEMUXER 1
#define CONFIG_MVI_DEMUXER 1
#define CONFIG_MXF_DEMUXER 1
#define CONFIG_MXG_DEMUXER 1
#define CONFIG_NC_DEMUXER 1
#define CONFIG_NSV_DEMUXER 1
#define CONFIG_NUT_DEMUXER 1
#define CONFIG_NUV_DEMUXER 1
#define CONFIG_OGG_DEMUXER 1
#define CONFIG_OMA_DEMUXER 1
#define CONFIG_PCM_ALAW_DEMUXER 1
#define CONFIG_PCM_MULAW_DEMUXER 1
#define CONFIG_PCM_F64BE_DEMUXER 1
#define CONFIG_PCM_F64LE_DEMUXER 1
#define CONFIG_PCM_F32BE_DEMUXER 1
#define CONFIG_PCM_F32LE_DEMUXER 1
#define CONFIG_PCM_S32BE_DEMUXER 1
#define CONFIG_PCM_S32LE_DEMUXER 1
#define CONFIG_PCM_S24BE_DEMUXER 1
#define CONFIG_PCM_S24LE_DEMUXER 1
#define CONFIG_PCM_S16BE_DEMUXER 1
#define CONFIG_PCM_S16LE_DEMUXER 1
#define CONFIG_PCM_S8_DEMUXER 1
#define CONFIG_PCM_U32BE_DEMUXER 1
#define CONFIG_PCM_U32LE_DEMUXER 1
#define CONFIG_PCM_U24BE_DEMUXER 1
#define CONFIG_PCM_U24LE_DEMUXER 1
#define CONFIG_PCM_U16BE_DEMUXER 1
#define CONFIG_PCM_U16LE_DEMUXER 1
#define CONFIG_PCM_U8_DEMUXER 1
#define CONFIG_PVA_DEMUXER 1
#define CONFIG_QCP_DEMUXER 1
#define CONFIG_R3D_DEMUXER 1
#define CONFIG_RAWVIDEO_DEMUXER 1
#define CONFIG_RL2_DEMUXER 1
#define CONFIG_RM_DEMUXER 1
#define CONFIG_ROQ_DEMUXER 1
#define CONFIG_RPL_DEMUXER 1
#define CONFIG_RSO_DEMUXER 1
#define CONFIG_RTP_DEMUXER 0
#define CONFIG_RTSP_DEMUXER 0
#define CONFIG_SAP_DEMUXER 0
#define CONFIG_SDP_DEMUXER 0
#define CONFIG_SEGAFILM_DEMUXER 1
#define CONFIG_SHORTEN_DEMUXER 1
#define CONFIG_SIFF_DEMUXER 1
#define CONFIG_SMACKER_DEMUXER 1
#define CONFIG_SOL_DEMUXER 1
#define CONFIG_SOX_DEMUXER 1
#define CONFIG_SPDIF_DEMUXER 1
#define CONFIG_SRT_DEMUXER 1
#define CONFIG_STR_DEMUXER 1
#define CONFIG_SWF_DEMUXER 1
#define CONFIG_THP_DEMUXER 1
#define CONFIG_TIERTEXSEQ_DEMUXER 1
#define CONFIG_TMV_DEMUXER 1
#define CONFIG_TRUEHD_DEMUXER 1
#define CONFIG_TTA_DEMUXER 1
#define CONFIG_TXD_DEMUXER 1
#define CONFIG_TTY_DEMUXER 1
#define CONFIG_VC1_DEMUXER 1
#define CONFIG_VC1T_DEMUXER 1
#define CONFIG_VMD_DEMUXER 1
#define CONFIG_VOC_DEMUXER 1
#define CONFIG_VQF_DEMUXER 1
#define CONFIG_W64_DEMUXER 1
#define CONFIG_WAV_DEMUXER 1
#define CONFIG_WC3_DEMUXER 0
#define CONFIG_WSAUD_DEMUXER 1
#define CONFIG_WSVQA_DEMUXER 1
#define CONFIG_WTV_DEMUXER 1
#define CONFIG_WV_DEMUXER 1
#define CONFIG_XA_DEMUXER 1
#define CONFIG_XMV_DEMUXER 1
#define CONFIG_XWMA_DEMUXER 1
#define CONFIG_YOP_DEMUXER 1
#define CONFIG_YUV4MPEGPIPE_DEMUXER 1
#define CONFIG_LIBNUT_DEMUXER 0
#define CONFIG_ACT_DEMUXER 0
#define CONFIG_ADF_DEMUXER 0
#define CONFIG_ADX_DEMUXER 1
#define CONFIG_BINTEXT_DEMUXER 0
#define CONFIG_BIT_DEMUXER 0
#define CONFIG_G723_1_DEMUXER 0
#define CONFIG_G729_DEMUXER 0
#define CONFIG_ICO_DEMUXER 0
#define CONFIG_IDF_DEMUXER 0
#define CONFIG_LOAS_DEMUXER 0
#define CONFIG_MICRODVD_DEMUXER 0
#define CONFIG_PMP_DEMUXER 0
#define CONFIG_SBG_DEMUXER 0
#define CONFIG_SMJPEG_DEMUXER 1
#define CONFIG_XBIN_DEMUXER 0
#define CONFIG_CDXL_DEMUXER 0
#define CONFIG_HLS_DEMUXER 0
#define CONFIG_MGSTS_DEMUXER 0
#define CONFIG_JACOSUB_DEMUXER 0
#define CONFIG_A64_MUXER 0
#define CONFIG_AC3_MUXER 0
#define CONFIG_ADX_MUXER 0
#define CONFIG_ADTS_MUXER 0
#define CONFIG_AIFF_MUXER 0
#define CONFIG_AMR_MUXER 0
#define CONFIG_ASF_MUXER 0
#define CONFIG_ASS_MUXER 0
#define CONFIG_ASF_STREAM_MUXER 0
#define CONFIG_AU_MUXER 0
#define CONFIG_AVI_MUXER 0
#define CONFIG_AVM2_MUXER 0
#define CONFIG_CAVSVIDEO_MUXER 0
#define CONFIG_CRC_MUXER 0
#define CONFIG_DAUD_MUXER 0
#define CONFIG_DIRAC_MUXER 0
#define CONFIG_DNXHD_MUXER 0
#define CONFIG_DTS_MUXER 0
#define CONFIG_DV_MUXER 0
#define CONFIG_EAC3_MUXER 0
#define CONFIG_FFM_MUXER 0
#define CONFIG_FFMETADATA_MUXER 0
#define CONFIG_FILMSTRIP_MUXER 0
#define CONFIG_FLAC_MUXER 0
#define CONFIG_FLV_MUXER 0
#define CONFIG_FRAMECRC_MUXER 0
#define CONFIG_FRAMEMD5_MUXER 0
#define CONFIG_G722_MUXER 0
#define CONFIG_GIF_MUXER 0
#define CONFIG_GXF_MUXER 0
#define CONFIG_H261_MUXER 0
#define CONFIG_H263_MUXER 0
#define CONFIG_H264_MUXER 0
#define CONFIG_IMAGE2_MUXER 0
#define CONFIG_IMAGE2PIPE_MUXER 0
#define CONFIG_IPOD_MUXER 0
#define CONFIG_ISMV_MUXER 0
#define CONFIG_IVF_MUXER 0
#define CONFIG_LATM_MUXER 0
#define CONFIG_M4V_MUXER 0
#define CONFIG_MD5_MUXER 0
#define CONFIG_MATROSKA_MUXER 0
#define CONFIG_MATROSKA_AUDIO_MUXER 0
#define CONFIG_MJPEG_MUXER 0
#define CONFIG_MLP_MUXER 0
#define CONFIG_MMF_MUXER 0
#define CONFIG_MOV_MUXER 0
#define CONFIG_MP2_MUXER 0
#define CONFIG_MP3_MUXER 0
#define CONFIG_MP4_MUXER 0
#define CONFIG_MPEG1SYSTEM_MUXER 0
#define CONFIG_MPEG1VCD_MUXER 0
#define CONFIG_MPEG1VIDEO_MUXER 0
#define CONFIG_MPEG2DVD_MUXER 0
#define CONFIG_MPEG2SVCD_MUXER 0
#define CONFIG_MPEG2VIDEO_MUXER 0
#define CONFIG_MPEG2VOB_MUXER 0
#define CONFIG_MPEGTS_MUXER 0
#define CONFIG_MPJPEG_MUXER 0
#define CONFIG_MXF_MUXER 0
#define CONFIG_MXF_D10_MUXER 0
#define CONFIG_NULL_MUXER 0
#define CONFIG_NUT_MUXER 0
#define CONFIG_OGG_MUXER 0
#define CONFIG_PCM_ALAW_MUXER 0
#define CONFIG_PCM_MULAW_MUXER 0
#define CONFIG_PCM_F64BE_MUXER 0
#define CONFIG_PCM_F64LE_MUXER 0
#define CONFIG_PCM_F32BE_MUXER 0
#define CONFIG_PCM_F32LE_MUXER 0
#define CONFIG_PCM_S32BE_MUXER 0
#define CONFIG_PCM_S32LE_MUXER 0
#define CONFIG_PCM_S24BE_MUXER 0
#define CONFIG_PCM_S24LE_MUXER 0
#define CONFIG_PCM_S16BE_MUXER 0
#define CONFIG_PCM_S16LE_MUXER 0
#define CONFIG_PCM_S8_MUXER 0
#define CONFIG_PCM_U32BE_MUXER 0
#define CONFIG_PCM_U32LE_MUXER 0
#define CONFIG_PCM_U24BE_MUXER 0
#define CONFIG_PCM_U24LE_MUXER 0
#define CONFIG_PCM_U16BE_MUXER 0
#define CONFIG_PCM_U16LE_MUXER 0
#define CONFIG_PCM_U8_MUXER 0
#define CONFIG_PSP_MUXER 0
#define CONFIG_RAWVIDEO_MUXER 0
#define CONFIG_RM_MUXER 0
#define CONFIG_ROQ_MUXER 0
#define CONFIG_RSO_MUXER 0
#define CONFIG_RTP_MUXER 0
#define CONFIG_RTSP_MUXER 0
#define CONFIG_SAP_MUXER 0
#define CONFIG_SOX_MUXER 0
#define CONFIG_SPDIF_MUXER 0
#define CONFIG_SMJPEG_MUXER 0
#define CONFIG_SRT_MUXER 0
#define CONFIG_SWF_MUXER 0
#define CONFIG_TG2_MUXER 0
#define CONFIG_TGP_MUXER 0
#define CONFIG_TRUEHD_MUXER 0
#define CONFIG_VC1T_MUXER 0
#define CONFIG_VOC_MUXER 0
#define CONFIG_WAV_MUXER 0
#define CONFIG_WEBM_MUXER 0
#define CONFIG_YUV4MPEGPIPE_MUXER 0
#define CONFIG_LIBNUT_MUXER 0
#define CONFIG_BIT_MUXER 0
#define CONFIG_CAF_MUXER 0
#define CONFIG_G723_1_MUXER 0
#define CONFIG_MICRODVD_MUXER 0
#define CONFIG_OMA_MUXER 0
#define CONFIG_SEGMENT_MUXER 0
#define CONFIG_MKVTIMESTAMP_V2_MUXER 0
#define CONFIG_WTV_MUXER 0
#define CONFIG_JACOSUB_MUXER 0
#define CONFIG_APPLEHTTP_PROTOCOL 0
#define CONFIG_BLURAY_PROTOCOL 0
#define CONFIG_CACHE_PROTOCOL 0
#define CONFIG_CONCAT_PROTOCOL 0
#define CONFIG_CRYPTO_PROTOCOL 0
#define CONFIG_FILE_PROTOCOL 0
#define CONFIG_GOPHER_PROTOCOL 0
#define CONFIG_HTTP_PROTOCOL 0
#define CONFIG_HTTPPROXY_PROTOCOL 0
#define CONFIG_HTTPS_PROTOCOL 0
#define CONFIG_MMSH_PROTOCOL 0
#define CONFIG_MMST_PROTOCOL 0
#define CONFIG_MD5_PROTOCOL 0
#define CONFIG_PIPE_PROTOCOL 0
#define CONFIG_RTMP_PROTOCOL 0
#define CONFIG_RTMPT_PROTOCOL 0
#define CONFIG_RTMPE_PROTOCOL 0
#define CONFIG_RTMPTE_PROTOCOL 0
#define CONFIG_RTMPS_PROTOCOL 0
#define CONFIG_RTP_PROTOCOL 0
#define CONFIG_TCP_PROTOCOL 0
#define CONFIG_TLS_PROTOCOL 0
#define CONFIG_UDP_PROTOCOL 0
#define CONFIG_HLS_PROTOCOL 0
#define CONFIG_LIBRTMP_PROTOCOL 0
#define CONFIG_LIBRTMPE_PROTOCOL 0
#define CONFIG_LIBRTMPS_PROTOCOL 0
#define CONFIG_LIBRTMPT_PROTOCOL 0
#define CONFIG_LIBRTMPTE_PROTOCOL 0
#define CONFIG_SCTP_PROTOCOL 0
#define CONFIG_AAC_ADTSTOASC_BSF 1
#define CONFIG_CHOMP_BSF 0
#define CONFIG_DUMP_EXTRADATA_BSF 1
#define CONFIG_H264_MP4TOANNEXB_BSF 1
#define CONFIG_IMX_DUMP_HEADER_BSF 1
#define CONFIG_MJPEG2JPEG_BSF 1
#define CONFIG_MJPEGA_DUMP_HEADER_BSF 1
#define CONFIG_MP3_HEADER_COMPRESS_BSF 1
#define CONFIG_MP3_HEADER_DECOMPRESS_BSF 1
#define CONFIG_MOV2TEXTSUB_BSF 1
#define CONFIG_NOISE_BSF 1
#define CONFIG_REMOVE_EXTRADATA_BSF 1
#define CONFIG_TEXT2MOVSUB_BSF 1
#define CONFIG_H263_VAAPI_HWACCEL 0
#define CONFIG_H264_DXVA2_HWACCEL 0
#define CONFIG_H264_VAAPI_HWACCEL 0
#define CONFIG_MPEG2_DXVA2_HWACCEL 0
#define CONFIG_MPEG2_VAAPI_HWACCEL 0
#define CONFIG_MPEG4_VAAPI_HWACCEL 0
#define CONFIG_VC1_DXVA2_HWACCEL 0
#define CONFIG_VC1_VAAPI_HWACCEL 0
#define CONFIG_WMV3_DXVA2_HWACCEL 0
#define CONFIG_WMV3_VAAPI_HWACCEL 0
#define CONFIG_H264_VDA_HWACCEL 0
#define CONFIG_MPEG1_VDPAU_HWACCEL 0
#define CONFIG_MPEG2_VDPAU_HWACCEL 0
#define CONFIG_ANULL_FILTER 0
#define CONFIG_ANULLSRC_FILTER 0
#define CONFIG_ANULLSINK_FILTER 0
#define CONFIG_BLACKFRAME_FILTER 0
#define CONFIG_COPY_FILTER 0
#define CONFIG_CROP_FILTER 0
#define CONFIG_CROPDETECT_FILTER 0
#define CONFIG_DRAWBOX_FILTER 0
#define CONFIG_FIFO_FILTER 0
#define CONFIG_FORMAT_FILTER 0
#define CONFIG_FREI0R_FILTER 0
#define CONFIG_GRADFUN_FILTER 0
#define CONFIG_HFLIP_FILTER 0
#define CONFIG_HQDN3D_FILTER 0
#define CONFIG_NOFORMAT_FILTER 0
#define CONFIG_NULL_FILTER 0
#define CONFIG_OCV_FILTER 0
#define CONFIG_OVERLAY_FILTER 0
#define CONFIG_PAD_FILTER 0
#define CONFIG_PIXDESCTEST_FILTER 0
#define CONFIG_SCALE_FILTER 0
#define CONFIG_SETDAR_FILTER 0
#define CONFIG_SETPTS_FILTER 0
#define CONFIG_SETSAR_FILTER 0
#define CONFIG_SETTB_FILTER 0
#define CONFIG_SLICIFY_FILTER 0
#define CONFIG_TRANSPOSE_FILTER 0
#define CONFIG_UNSHARP_FILTER 0
#define CONFIG_VFLIP_FILTER 0
#define CONFIG_YADIF_FILTER 0
#define CONFIG_BUFFER_FILTER 0
#define CONFIG_COLOR_FILTER 0
#define CONFIG_FREI0R_SRC_FILTER 0
#define CONFIG_MOVIE_FILTER 0
#define CONFIG_NULLSRC_FILTER 0
#define CONFIG_NULLSINK_FILTER 0

#endif /* MPLAYER_CONFIG_H */
