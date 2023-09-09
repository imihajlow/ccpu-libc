CC=ccpu-cc
ASM=../ccpu/tools/asm.py
CFLAGS=--std=gnu11 -I include

LIBC_OBJECTS=lib/__assert.o \
	lib/__itoa.o \
	lib/__memcpy.o \
	lib/_heap.o \
	lib/_memchr.o \
	lib/_memcmp.o \
	lib/_memmove.o \
	lib/_strcat.o \
	lib/_strchr.o \
	lib/_strcmp.o \
	lib/_strcpy.o \
	lib/_strcspn.o \
	lib/_strlen.o \
	lib/_strncat.o \
	lib/_strncmp.o \
	lib/_strncpy.o \
	lib/_strpbrk.o \
	lib/_strrchr.o \
	lib/_strspn.o \
	lib/_strstr.o \
	lib/_strtok.o \
	lib/abs.o \
	lib/aligned_alloc.o \
	lib/atoi.o \
	lib/atol.o \
	lib/atoll.o \
	lib/bsearch.o \
	lib/btowc.o \
	lib/c16rtomb.o \
	lib/c32rtomb.o \
	lib/call_once.o \
	lib/calloc.o \
	lib/errno.o \
	lib/free.o \
	lib/gets.o \
	lib/imaxabs.o \
	lib/isalnum.o \
	lib/isalpha.o \
	lib/isblank.o \
	lib/iscntrl.o \
	lib/isdigit.o \
	lib/isgraph.o \
	lib/islower.o \
	lib/isprint.o \
	lib/ispunct.o \
	lib/isspace.o \
	lib/isupper.o \
	lib/isxdigit.o \
	lib/labs.o \
	lib/llabs.o \
	lib/malloc.o \
	lib/mblen.o \
	lib/mbrlen.o \
	lib/mbrtoc16.o \
	lib/mbrtoc32.o \
	lib/mbsinit.o \
	lib/mbstowcs.o \
	lib/mbtowc.o \
	lib/memalignment.o \
	lib/memccpy.o \
	lib/memcpy.o \
	lib/memset_explicit.o \
	lib/printf_large.o \
	lib/printfl.o \
	lib/puts.o \
	lib/qsort.o \
	lib/rand.o \
	lib/realloc.o \
	lib/sprintf.o \
	lib/strdup.o \
	lib/strndup.o \
	lib/strtoimax.o \
	lib/strtol.o \
	lib/strtoll.o \
	lib/strtoull.o \
	lib/strtoumax.o \
	lib/strxfrm.o \
	lib/tolower.o \
	lib/toupper.o \
	lib/vprintf.o \
	lib/wcrtomb.o \
	lib/wcscmp.o \
	lib/wcslen.o \
	lib/wcsncmp.o \
	lib/wcstoimax.o \
	lib/wcstol.o \
	lib/wcstoll.o \
	lib/wcstombs.o \
	lib/wcstoull.o \
	lib/wcstoumax.o \
	lib/wctob.o \
	lib/wctomb.o

libc.a: $(LIBC_OBJECTS)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $(@:.o=.s) $<
	$(ASM) -o $@ $(@:.o=.s)

%.o: %.asm
	$(ASM) -o $@ $^

clean:
	rm -f lib/*.s lib/*.o libc.a

