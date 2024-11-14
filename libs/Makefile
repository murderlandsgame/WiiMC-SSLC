COMMAND1 = chmod +wrx configure && ./configure && make && make install

all: dir1 dir2 dir3

dir1:
	cd fribidi && $(COMMAND1)
dir2:
	cd libexif && $(COMMAND1)
dir3:
	cd libiconv && $(COMMAND1)
