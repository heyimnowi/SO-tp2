include ../Makefile.inc

MODULE=00-shell.bin
ASMSOURCES=$(wildcard *.asm)
CSOURCES=$(wildcard *.c)
COBJECTS=$(CSOURCES:.c=.o)
ASMOBJECTS=$(ASMSOURCES:.asm=.o)

all: $(MODULE)

%.o:	%.c
	$(GCC) $(GCCFLAGS) -c $< -o $@

%.o:	%.asm
	$(ASM) $(ASMFLAGS) $< -o $@


$(MODULE):	$(ASMOBJECTS) $(COBJECTS)
	$(LD) -T linkerScript.ld $(CRT0) $(ASMOBJECTS) $(COBJECTS) $(LIBC) -o ../$(MODULE) -Map map

clean:
	rm -rf *.o

.PHONY: all clean
