

#ARMGNU ?= arm-none-linux-gnueabi
#ARMGNU ?= arm-none-eabi
ARMGNU ?= arm-linux-gnueabi

COPS = -Wall -O2 -nostdlib -nostartfiles -ffreestanding 


all : notmain.bin

clean :
	rm -f *.o
	rm -f *.bin
	rm -f *.elf
	rm -f *.list
	rm -f notmain.srec



notmain.o : notmain.c
	$(ARMGNU)-gcc $(COPS) -c notmain.c -o notmain.o

novectors.o : novectors.s
	$(ARMGNU)-as novectors.s -march=armv7a -mfpu=vfp -o novectors.o

notmain.bin : memmap novectors.o notmain.o 
	$(ARMGNU)-ld novectors.o notmain.o -T memmap -o notmain.elf
	$(ARMGNU)-objdump -D notmain.elf > notmain.list
	$(ARMGNU)-objcopy --srec-forceS3 notmain.elf -O srec notmain.srec
	$(ARMGNU)-objcopy notmain.elf -O binary notmain.bin 






