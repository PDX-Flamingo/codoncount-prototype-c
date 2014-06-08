#include <stdio.h>
#include <string.h>
#include <time.h>
#include <zlib.h>

#include <libcalg-1.0/libcalg/trie.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

#include <jansson.h>

#include "fastaparser.h"


//Prototypes
char * count_codons(const char * name, const char * comment, const char * sequence);
char * return_json(Trie * counts, const char * name, const char * comment, const long int seq_length);
char * count_codons(const char * name, const char * comment, const char * sequence);