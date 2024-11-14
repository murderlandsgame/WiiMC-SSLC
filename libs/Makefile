COMMAND1 = export DEVKITPPC=/opt/devkitpro/devkitPPC && chmod +wrx configure && (CC=/opt/devkitpro/devkitPPC/bin/powerpc-eabi-gcc CXX=/opt/devkitpro/devkitPPC/bin/powerpc-eabi-g++ ./configure --host=powerpc-eabi --build=powerpc-eabi-gnu --prefix="/opt/devkitpro/devkitPPC/portlibs/ppc" --libdir="/opt/devkitpro/devkitPPC/portlibs/ppc/lib/" --disable-shared && \
      make && sudo -E make install)

all: dir1 dir2 dir3

dir1:
	cd fribidi && $(COMMAND1)
dir2:
	cd libexif && $(COMMAND1)
dir3:
	cd libiconv && $(COMMAND1)
