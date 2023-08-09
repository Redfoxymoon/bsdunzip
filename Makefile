CC ?= gcc
CFLAGS ?= -Wall -Wextra
LDFLAGS ?=
LIBS ?= -larchive

all: unzip

unzip: unzip.c
	$(CC) $(CFLAGS) -std=gnu99 --include=portable.h $? -o $@ $(LDFLAGS) $(LIBS)

clean:
	rm -f unzip.exe unzip.o unzip

.PHONY: clean
