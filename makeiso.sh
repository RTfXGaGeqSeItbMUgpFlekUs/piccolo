#!/bin/sh

isocmd="genisoimage"

rm -rf isofs/System/

mkdir -p isofs/boot/grub

if [ ! -e '/usr/bin/genisoimage' ]
then
	isocmd="mkisofs"
fi

mkdir -p isofs/System

cp piccolo isofs/System/

rm isofs/boot/grub/menu.lst
touch isofs/boot/grub/menu.lst
echo "default 1" > isofs/boot/grub/menu.lst
echo "timeout 3" >> isofs/boot/grub/menu.lst
echo "title Piccolo" >> isofs/boot/grub/menu.lst
echo "kernel /System/piccolo" >> isofs/boot/grub/menu.lst

$isocmd -R -b boot/grub/stage2_eltorito -no-emul-boot -boot-load-size 4 -boot-info-table -input-charset utf-8 -o piccolo.iso isofs
