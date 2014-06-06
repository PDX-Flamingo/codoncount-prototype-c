//
//  main.c
//  CodonCount-C
//
//  Created by Philip Tseng on 6/3/14.
//  Copyright (c) 2014 PhilTseng. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <time.h>

#include <libcalg/trie.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

#include <jansson.h>

json_t * trieValuetoJsonInteger(TrieValue i)
{
    return json_integer((long) i);
}

void save_json(Trie * counts, long int seq_length)
{
    json_t * json = json_object();
    json_t * codonCountjson = json_object();
    
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
    
    printf("%s\n",json_dumps(json, JSON_INDENT(4) | JSON_PRESERVE_ORDER));
    
    
}

void count_codons(const char * sequence)
{
    const char * valid_characters = "ACTG";
    char codon[4];
    
    Trie * codoncount = trie_new();
    
    long seq_length = strlen(sequence) - 2;
    
    float startTime = (float)clock()/CLOCKS_PER_SEC;
    
    for (int i = 0; i < seq_length; i+=3)
    {
        strncpy(codon, sequence+i, 3);
        codon[3] = '\0';
        
        int invalid = 0;
        char *c = codon;
        
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
        
        if (currentcount == TRIE_NULL)
            trie_insert(codoncount, codon, (TrieValue) 1);
        else
        {
            long current = (long) currentcount;
            current++;
            currentcount = (TrieValue) current;
            trie_insert(codoncount, codon, currentcount);
        }
    }
    
    float endTime = (float)clock()/CLOCKS_PER_SEC;
    float timeElapsed = (endTime - startTime);

    save_json(codoncount, seq_length+2);
    
    printf("%6.6f seconds counting codons\n", timeElapsed);
    //printf("%d entries\n", trie_num_entries(codoncount));
    
    trie_free(codoncount);

}


int main(int argc, const char * argv[]) {

    const char * testseq = "TTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGG";
    

    int fd = open("./cow.seq", O_RDONLY);
    long long len = lseek(fd, 0, SEEK_END);
    void * data = mmap(0, len, PROT_READ, MAP_PRIVATE, fd, 0);
    
    count_codons(testseq);
    count_codons((const char*) data);
    
    close(fd);
    return 0;
}


