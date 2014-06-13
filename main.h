#include <stdio.h>
#include <string.h>
#include <time.h>
#include <zlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

#include <jansson.h>

#include "trie_codon.h"
#include "fastaparser.h"
#include "gbparser.h"


//Prototypes
char * count_codons(const char * source, const char * definition, const char * version, const char * taxon, const char * sequence);
char * return_json(Trie * counts, const char * source, const char *definition, const char * version, const char * taxon, const long int seq_length);