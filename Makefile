UNAME := $(shell uname)

CC = gcc

ifeq ($(UNAME), Darwin)
CC = gcc
endif

prefix=${HOME}
exec_prefix=${prefix}
libdir=${exec_prefix}/lib
includedir=${prefix}/include

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -std=c99 -I${includedir} -L${libdir} -lgbfp -ljansson -lz -O3 -funroll-loops

# the build target executable:
TARGET = main
TRIE_CODON = trie_codon
FASTAPARSER = fastaparser
GENBANKPARSER = gbparser

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(TRIE_CODON).c $(FASTAPARSER).c $(GENBANKPARSER).c gbfp.c

clean:
	$(RM) $(TARGET)
