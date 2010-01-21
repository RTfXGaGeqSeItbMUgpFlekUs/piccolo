SRCS= src/boot.s src/kmain.c src/kprint.c src/video.c
SOBJS= $(SRCS:.s=.o)
OBJS= $(SOBJS:.c=.o)

CC=gcc
CCARGS=-Wall -Wextra -nostdlib -nostartfiles -nodefaultlibs -Iinclude

all: piccolo

piccolo: $(OBJS)
	ld -melf_i386 -Ttext 0x100000 -o piccolo $(OBJS)
	(./makeiso.sh)

.s.o:
	nasm -felf -o $@ $<

.c.o:
	$(CC) -o $@ -c $< $(CCARGS)

clean:
	-rm src/*.o piccolo piccolo.iso
