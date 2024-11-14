COMMAND1 = export DEVKITPPC=/opt/devkitpro/devkitppc && chmod +wrx configure && (CC=$(DEVKITPPC)/bin/powerpc-eabi-gcc CXX=$(DEVKITPPC)/bin/powerpc-eabi-g++ ./configure) && make && make install

all: dir1 dir2 dir3

dir1:
	cd fribidi && $(COMMAND1)
dir2:
	cd libexif && $(COMMAND1)
dir3:
	cd libiconv && $(COMMAND1)
