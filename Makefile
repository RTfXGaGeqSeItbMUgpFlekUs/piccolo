include config.mk

SRCS= src/boot.s src/kmain.c src/ports.c src/video.c
SOBJS= $(SRCS:.s=.o)
OBJS= $(SOBJS:.c=.o)

CCARGS=-Wall -Wextra -nostdlib -nostartfiles -nodefaultlibs -fno-builtin -Iinclude

all: piccolo

piccolo: $(OBJS)
	ld -melf_i386 -nostdlib -T src/link.ld -o piccolo $(OBJS)
	(./makeiso.sh)

.s.o:
	$(AS) -felf32 -o $@ $<

.c.o:
	$(CC) -m32 -o $@ -c $< $(CCARGS)

clean:
	-rm src/*.o piccolo piccolo.iso
