CC=ccpu-cc
ASM=../ccpu/tools/asm.py
CFLAGS=--std=gnu11 --isystem=include

LIBC_OBJECTS=

%.o: %.c
	$(CC) $(CFLAGS) -o $(@:.o=.s) $<
	$(ASM) -o $@ $(@:.o=.s)

%.o: %.asm
	$(ASM) -o $@ $^
