# the compiler: gcc for C program, define as g++ for C++
CC = g++
prefix=${HOME}
exec_prefix=${prefix}
libdir=${exec_prefix}/lib
includedir=${prefix}/include

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -I${includedir} -L${libdir} -lcalg -ljansson -lz -O3 -funroll-loops

# the build target executable:
TARGET = main
FASTAPARSER = fastaparser
GENBANKPARSER = gbparser

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(FASTAPARSER).c

clean:
	$(RM) $(TARGET)
