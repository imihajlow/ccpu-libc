CC=ccpu-cc
ASM=../ccpu/tools/asm.py
CFLAGS=--std=gnu11 -I include

LIBC_OBJECTS=

%.o: %.c
	$(CC) $(CFLAGS) -o $(@:.o=.s) $<
	$(ASM) -o $@ $(@:.o=.s)

%.o: %.asm
	$(ASM) -o $@ $^
