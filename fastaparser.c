#include "main.h"
#include "fastaparser.h"

KSEQ_INIT(gzFile, gzread)

void parse_fasta(const char * filename)
{
    gzFile fp;
    kseq_t *seq;
    int l;

    fp = gzopen(filename, "r"); // STEP 2: open the file handler
    seq = kseq_init(fp); // STEP 3: initialize seq

    remove("./output.json");
    FILE * outputfp = fopen("./output.json", "a");

    while ((l = kseq_read(seq)) >= 0) { // STEP 4: read sequence
        fputs(count_codons(seq->name.s, seq->comment.s, seq->seq.s), outputfp);
    }
    fclose(outputfp);
    kseq_destroy(seq); // STEP 5: destroy seq
    gzclose(fp); // STEP 6: close the file handler
}