//
//  main.c
//  CodonCount-C
//
//  Created by Phil Tseng on 6/3/14.
//  Team Flamingo - Apache 2.0
//

#include "main.h"

int main(int argc, char * argv[]) {
    
    if (argc == 1)
    {
        fprintf(stderr, "\n*** Testing Counter ***\n");
        const char * testseq = "NTNTNTTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGG";
        
        const char * shortseq = "AAATTTCCCGGG";
        
        int fd = open("./cow.seq", O_RDONLY);
        long long len = lseek(fd, 0, SEEK_END);
        void * data = mmap(0, len, PROT_READ, MAP_PRIVATE, fd, 0);
        close(fd);

        fprintf(stderr, "\n");
        fprintf(stderr, "%s\n", count_codons("Test1", "five each", "1", "", testseq));
        fprintf(stderr, ".");
        count_codons("Test2", "short sequence", "2", "", shortseq);
        fprintf(stderr, ".");
        float startTime = (float)clock()/CLOCKS_PER_SEC;
        count_codons("TestCow", "Cow Sequence", "3", "", (const char*) data);
        float endTime = (float)clock()/CLOCKS_PER_SEC;
        float timeElapsed = (endTime - startTime);
        fprintf(stderr, ".");
        fprintf(stderr, "\n");
        fprintf(stderr, "%6.6f sec 81 MB cow.seq\n\n", timeElapsed);

        fprintf(stderr, "-----\nUsage:\n");
        fprintf(stderr, "       Fasta: ./run.sh cow.fna.gz -fasta\n");
        fprintf(stderr, "     GenBank: cat cow.gbff | ./run.sh -gb\n");
        fprintf(stderr, "  GenBank.gz: gzip -cd cow.gbff.gz | ./run.sh -gb\n");
        fprintf(stderr, "        Test: ./run.sh\n");
        return 0;
    }

    if (!strcmp(argv[1], "-gb")) {
        float startTime = (float) clock() / CLOCKS_PER_SEC;
        parse_genbank();
        float endTime = (float) clock() / CLOCKS_PER_SEC;
        float timeElapsed = (endTime - startTime);
        fprintf(stderr, "%6.6f seconds counting codons\n", timeElapsed);
        return 0;
    }

    if (argc == 2)
    {
        fprintf(stderr, "-----\nUsage:\n");
        fprintf(stderr, "       Fasta: ./run.sh cow.fna.gz -fasta\n");
        fprintf(stderr, "     GenBank: cat cow.gbff | ./run.sh -gb\n");
        fprintf(stderr, "  GenBank.gz: gzip -cd cow.gbff.gz | ./run.sh -gb\n");
        fprintf(stderr, "        Test: ./run.sh\n");
        return 0;
    }

    if (!strcmp(argv[2], "-fasta")) {
        float startTime = (float) clock() / CLOCKS_PER_SEC;
        parse_fasta(argv[1]);
        float endTime = (float) clock() / CLOCKS_PER_SEC;
        float timeElapsed = (endTime - startTime);
        fprintf(stderr, "%6.6f seconds counting codons\n", timeElapsed);
        return 0;
    }

    fprintf(stderr, "Invalid Parameter\n");
    fprintf(stderr, "-----\nUsage:\n");
    fprintf(stderr, "       Fasta: ./run.sh cow.fna.gz -fasta\n");
    fprintf(stderr, "     GenBank: cat cow.gbff | ./run.sh -gb\n");
    fprintf(stderr, "  GenBank.gz: gzip -cd cow.gbff.gz | ./run.sh -gb\n");
    fprintf(stderr, "        Test: ./run.sh\n");
    return 0;
}

char * count_codons(const char * source, const char * definition, const char * version, const char * taxon, const char * sequence)
{
    const char * valid_characters = "ACTG";
    char codon[4];

    Trie * codoncount = trie_new();     // You create it, you destroy it (in return_json)

    //Prepare Trie, excuse the verboseness
    trie_insert(codoncount, "TTT", (TrieValue) 0);
    trie_insert(codoncount, "TTC", (TrieValue) 0);
    trie_insert(codoncount, "TTA", (TrieValue) 0);
    trie_insert(codoncount, "TTG", (TrieValue) 0);
    trie_insert(codoncount, "TCT", (TrieValue) 0);
    trie_insert(codoncount, "TCC", (TrieValue) 0);
    trie_insert(codoncount, "TCA", (TrieValue) 0);
    trie_insert(codoncount, "TCG", (TrieValue) 0);
    trie_insert(codoncount, "TAT", (TrieValue) 0);
    trie_insert(codoncount, "TAC", (TrieValue) 0);
    trie_insert(codoncount, "TAA", (TrieValue) 0);
    trie_insert(codoncount, "TAG", (TrieValue) 0);
    trie_insert(codoncount, "TGT", (TrieValue) 0);
    trie_insert(codoncount, "TGC", (TrieValue) 0);
    trie_insert(codoncount, "TGA", (TrieValue) 0);
    trie_insert(codoncount, "TGG", (TrieValue) 0);
    trie_insert(codoncount, "CTT", (TrieValue) 0);
    trie_insert(codoncount, "CTC", (TrieValue) 0);
    trie_insert(codoncount, "CTA", (TrieValue) 0);
    trie_insert(codoncount, "CTG", (TrieValue) 0);
    trie_insert(codoncount, "CCT", (TrieValue) 0);
    trie_insert(codoncount, "CCC", (TrieValue) 0);
    trie_insert(codoncount, "CCA", (TrieValue) 0);
    trie_insert(codoncount, "CCG", (TrieValue) 0);
    trie_insert(codoncount, "CAT", (TrieValue) 0);
    trie_insert(codoncount, "CAC", (TrieValue) 0);
    trie_insert(codoncount, "CAA", (TrieValue) 0);
    trie_insert(codoncount, "CAG", (TrieValue) 0);
    trie_insert(codoncount, "CGT", (TrieValue) 0);
    trie_insert(codoncount, "CGC", (TrieValue) 0);
    trie_insert(codoncount, "CGA", (TrieValue) 0);
    trie_insert(codoncount, "CGG", (TrieValue) 0);
    trie_insert(codoncount, "ATT", (TrieValue) 0);
    trie_insert(codoncount, "ATC", (TrieValue) 0);
    trie_insert(codoncount, "ATA", (TrieValue) 0);
    trie_insert(codoncount, "ATG", (TrieValue) 0);
    trie_insert(codoncount, "ACT", (TrieValue) 0);
    trie_insert(codoncount, "ACC", (TrieValue) 0);
    trie_insert(codoncount, "ACA", (TrieValue) 0);
    trie_insert(codoncount, "ACG", (TrieValue) 0);
    trie_insert(codoncount, "AAT", (TrieValue) 0);
    trie_insert(codoncount, "AAC", (TrieValue) 0);
    trie_insert(codoncount, "AAA", (TrieValue) 0);
    trie_insert(codoncount, "AAG", (TrieValue) 0);
    trie_insert(codoncount, "AGT", (TrieValue) 0);
    trie_insert(codoncount, "AGC", (TrieValue) 0);
    trie_insert(codoncount, "AGA", (TrieValue) 0);
    trie_insert(codoncount, "AGG", (TrieValue) 0);
    trie_insert(codoncount, "GTT", (TrieValue) 0);
    trie_insert(codoncount, "GTC", (TrieValue) 0);
    trie_insert(codoncount, "GTA", (TrieValue) 0);
    trie_insert(codoncount, "GTG", (TrieValue) 0);
    trie_insert(codoncount, "GCT", (TrieValue) 0);
    trie_insert(codoncount, "GCC", (TrieValue) 0);
    trie_insert(codoncount, "GCA", (TrieValue) 0);
    trie_insert(codoncount, "GCG", (TrieValue) 0);
    trie_insert(codoncount, "GAT", (TrieValue) 0);
    trie_insert(codoncount, "GAC", (TrieValue) 0);
    trie_insert(codoncount, "GAA", (TrieValue) 0);
    trie_insert(codoncount, "GAG", (TrieValue) 0);
    trie_insert(codoncount, "GGT", (TrieValue) 0);
    trie_insert(codoncount, "GGC", (TrieValue) 0);
    trie_insert(codoncount, "GGA", (TrieValue) 0);
    trie_insert(codoncount, "GGG", (TrieValue) 0);

    long seq_length = strlen(sequence) - 2;
    char *c = codon;

    for (int i = 0; i < seq_length; i+=3)
    {
        int invalid = 0;

        strncpy(codon, sequence+i, 3);
        codon[3] = '\0';

        while (*c)
        {
            if (!strchr(valid_characters, *c))
            {
                invalid = 1;
                break;
            }
            c++;
        }

        if (invalid == 1) { continue; }

        TrieValue currentcount = trie_lookup(codoncount, codon);
        long current = (long) currentcount + 1;
        trie_insert(codoncount, codon, (TrieValue) current);      
    }

    return return_json(codoncount, source, definition, version, taxon, seq_length+2);
}


static json_t * trieValuetoJsonInteger(TrieValue i)
{
    return json_integer((long) i);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wwrite-strings"
char * return_json(Trie * counts, const char * source, const char *definition, const char * version, const char * taxon, const long int seq_length)
{
    json_t * json = json_object();
    json_t * codonCountjson = json_object();

    json_object_set_new(json, "Source Organism", json_string(source));
    json_object_set_new(json, "Definition", json_string(definition));
    json_object_set_new(json, "Version", json_string(version));
    json_object_set_new(json, "Taxon", json_string(taxon));
    json_object_set_new(json, "Sequence Length", json_integer(seq_length));
    json_object_set_new(json, "Codon Counts", codonCountjson);

    json_object_set_new(codonCountjson, "TTT", trieValuetoJsonInteger(trie_lookup(counts, "TTT")) );
    json_object_set_new(codonCountjson, "TTC", trieValuetoJsonInteger(trie_lookup(counts, "TTC")) );
    json_object_set_new(codonCountjson, "TTA", trieValuetoJsonInteger(trie_lookup(counts, "TTA")) );
    json_object_set_new(codonCountjson, "TTG", trieValuetoJsonInteger(trie_lookup(counts, "TTG")) );
    json_object_set_new(codonCountjson, "TCT", trieValuetoJsonInteger(trie_lookup(counts, "TCT")) );
    json_object_set_new(codonCountjson, "TCC", trieValuetoJsonInteger(trie_lookup(counts, "TCC")) );
    json_object_set_new(codonCountjson, "TCA", trieValuetoJsonInteger(trie_lookup(counts, "TCA")) );
    json_object_set_new(codonCountjson, "TCG", trieValuetoJsonInteger(trie_lookup(counts, "TCG")) );
    json_object_set_new(codonCountjson, "TAT", trieValuetoJsonInteger(trie_lookup(counts, "TAT")) );
    json_object_set_new(codonCountjson, "TAC", trieValuetoJsonInteger(trie_lookup(counts, "TAC")) );
    json_object_set_new(codonCountjson, "TAA", trieValuetoJsonInteger(trie_lookup(counts, "TAA")) );
    json_object_set_new(codonCountjson, "TAG", trieValuetoJsonInteger(trie_lookup(counts, "TAG")) );
    json_object_set_new(codonCountjson, "TGT", trieValuetoJsonInteger(trie_lookup(counts, "TGT")) );
    json_object_set_new(codonCountjson, "TGC", trieValuetoJsonInteger(trie_lookup(counts, "TGC")) );
    json_object_set_new(codonCountjson, "TGA", trieValuetoJsonInteger(trie_lookup(counts, "TGA")) );
    json_object_set_new(codonCountjson, "TGG", trieValuetoJsonInteger(trie_lookup(counts, "TGG")) );
    json_object_set_new(codonCountjson, "CTT", trieValuetoJsonInteger(trie_lookup(counts, "CTT")) );
    json_object_set_new(codonCountjson, "CTC", trieValuetoJsonInteger(trie_lookup(counts, "CTC")) );
    json_object_set_new(codonCountjson, "CTA", trieValuetoJsonInteger(trie_lookup(counts, "CTA")) );
    json_object_set_new(codonCountjson, "CTG", trieValuetoJsonInteger(trie_lookup(counts, "CTG")) );
    json_object_set_new(codonCountjson, "CCT", trieValuetoJsonInteger(trie_lookup(counts, "CCT")) );
    json_object_set_new(codonCountjson, "CCC", trieValuetoJsonInteger(trie_lookup(counts, "CCC")) );
    json_object_set_new(codonCountjson, "CCA", trieValuetoJsonInteger(trie_lookup(counts, "CCA")) );
    json_object_set_new(codonCountjson, "CCG", trieValuetoJsonInteger(trie_lookup(counts, "CCG")) );
    json_object_set_new(codonCountjson, "CAT", trieValuetoJsonInteger(trie_lookup(counts, "CAT")) );
    json_object_set_new(codonCountjson, "CAC", trieValuetoJsonInteger(trie_lookup(counts, "CAC")) );
    json_object_set_new(codonCountjson, "CAA", trieValuetoJsonInteger(trie_lookup(counts, "CAA")) );
    json_object_set_new(codonCountjson, "CAG", trieValuetoJsonInteger(trie_lookup(counts, "CAG")) );
    json_object_set_new(codonCountjson, "CGT", trieValuetoJsonInteger(trie_lookup(counts, "CGT")) );
    json_object_set_new(codonCountjson, "CGC", trieValuetoJsonInteger(trie_lookup(counts, "CGC")) );
    json_object_set_new(codonCountjson, "CGA", trieValuetoJsonInteger(trie_lookup(counts, "CGA")) );
    json_object_set_new(codonCountjson, "CGG", trieValuetoJsonInteger(trie_lookup(counts, "CGG")) );
    json_object_set_new(codonCountjson, "ATT", trieValuetoJsonInteger(trie_lookup(counts, "ATT")) );
    json_object_set_new(codonCountjson, "ATC", trieValuetoJsonInteger(trie_lookup(counts, "ATC")) );
    json_object_set_new(codonCountjson, "ATA", trieValuetoJsonInteger(trie_lookup(counts, "ATA")) );
    json_object_set_new(codonCountjson, "ATG", trieValuetoJsonInteger(trie_lookup(counts, "ATG")) );
    json_object_set_new(codonCountjson, "ACT", trieValuetoJsonInteger(trie_lookup(counts, "ACT")) );
    json_object_set_new(codonCountjson, "ACC", trieValuetoJsonInteger(trie_lookup(counts, "ACC")) );
    json_object_set_new(codonCountjson, "ACA", trieValuetoJsonInteger(trie_lookup(counts, "ACA")) );
    json_object_set_new(codonCountjson, "ACG", trieValuetoJsonInteger(trie_lookup(counts, "ACG")) );
    json_object_set_new(codonCountjson, "AAT", trieValuetoJsonInteger(trie_lookup(counts, "AAT")) );
    json_object_set_new(codonCountjson, "AAC", trieValuetoJsonInteger(trie_lookup(counts, "AAC")) );
    json_object_set_new(codonCountjson, "AAA", trieValuetoJsonInteger(trie_lookup(counts, "AAA")) );
    json_object_set_new(codonCountjson, "AAG", trieValuetoJsonInteger(trie_lookup(counts, "AAG")) );
    json_object_set_new(codonCountjson, "AGT", trieValuetoJsonInteger(trie_lookup(counts, "AGT")) );
    json_object_set_new(codonCountjson, "AGC", trieValuetoJsonInteger(trie_lookup(counts, "AGC")) );
    json_object_set_new(codonCountjson, "AGA", trieValuetoJsonInteger(trie_lookup(counts, "AGA")) );
    json_object_set_new(codonCountjson, "AGG", trieValuetoJsonInteger(trie_lookup(counts, "AGG")) );
    json_object_set_new(codonCountjson, "GTT", trieValuetoJsonInteger(trie_lookup(counts, "GTT")) );
    json_object_set_new(codonCountjson, "GTC", trieValuetoJsonInteger(trie_lookup(counts, "GTC")) );
    json_object_set_new(codonCountjson, "GTA", trieValuetoJsonInteger(trie_lookup(counts, "GTA")) );
    json_object_set_new(codonCountjson, "GTG", trieValuetoJsonInteger(trie_lookup(counts, "GTG")) );
    json_object_set_new(codonCountjson, "GCT", trieValuetoJsonInteger(trie_lookup(counts, "GCT")) );
    json_object_set_new(codonCountjson, "GCC", trieValuetoJsonInteger(trie_lookup(counts, "GCC")) );
    json_object_set_new(codonCountjson, "GCA", trieValuetoJsonInteger(trie_lookup(counts, "GCA")) );
    json_object_set_new(codonCountjson, "GCG", trieValuetoJsonInteger(trie_lookup(counts, "GCG")) );
    json_object_set_new(codonCountjson, "GAT", trieValuetoJsonInteger(trie_lookup(counts, "GAT")) );
    json_object_set_new(codonCountjson, "GAC", trieValuetoJsonInteger(trie_lookup(counts, "GAC")) );
    json_object_set_new(codonCountjson, "GAA", trieValuetoJsonInteger(trie_lookup(counts, "GAA")) );
    json_object_set_new(codonCountjson, "GAG", trieValuetoJsonInteger(trie_lookup(counts, "GAG")) );
    json_object_set_new(codonCountjson, "GGT", trieValuetoJsonInteger(trie_lookup(counts, "GGT")) );
    json_object_set_new(codonCountjson, "GGC", trieValuetoJsonInteger(trie_lookup(counts, "GGC")) );
    json_object_set_new(codonCountjson, "GGA", trieValuetoJsonInteger(trie_lookup(counts, "GGA")) );
    json_object_set_new(codonCountjson, "GGG", trieValuetoJsonInteger(trie_lookup(counts, "GGG")) );

    char * data = json_dumps(json, JSON_INDENT(4) | JSON_PRESERVE_ORDER);

    trie_free(counts);                  // You destroy it
    json_object_clear(codonCountjson);
    json_object_clear(json);

    return data;
}
#pragma GCC diagnostic pop

