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

void display_codons(Trie * codoncount)
{
    printf("TTT: %d\n", (int) trie_lookup(codoncount, "TTT"));
    printf("TTC: %d\n", (int) trie_lookup(codoncount, "TTC"));
    printf("TTA: %d\n", (int) trie_lookup(codoncount, "TTA"));
    printf("TTG: %d\n", (int) trie_lookup(codoncount, "TTG"));
    printf("TCT: %d\n", (int) trie_lookup(codoncount, "TCT"));
    printf("TCC: %d\n", (int) trie_lookup(codoncount, "TCC"));
    printf("TCA: %d\n", (int) trie_lookup(codoncount, "TCA"));
    printf("TCG: %d\n", (int) trie_lookup(codoncount, "TCG"));
    printf("TAT: %d\n", (int) trie_lookup(codoncount, "TAT"));
    printf("TAC: %d\n", (int) trie_lookup(codoncount, "TAC"));
    printf("TAA: %d\n", (int) trie_lookup(codoncount, "TAA"));
    printf("TAG: %d\n", (int) trie_lookup(codoncount, "TAG"));
    printf("TGT: %d\n", (int) trie_lookup(codoncount, "TGT"));
    printf("TGC: %d\n", (int) trie_lookup(codoncount, "TGC"));
    printf("TGA: %d\n", (int) trie_lookup(codoncount, "TGA"));
    printf("TGG: %d\n", (int) trie_lookup(codoncount, "TGG"));
    printf("CTT: %d\n", (int) trie_lookup(codoncount, "CTT"));
    printf("CTC: %d\n", (int) trie_lookup(codoncount, "CTC"));
    printf("CTA: %d\n", (int) trie_lookup(codoncount, "CTA"));
    printf("CTG: %d\n", (int) trie_lookup(codoncount, "CTG"));
    printf("CCT: %d\n", (int) trie_lookup(codoncount, "CCT"));
    printf("CCC: %d\n", (int) trie_lookup(codoncount, "CCC"));
    printf("CCA: %d\n", (int) trie_lookup(codoncount, "CCA"));
    printf("CCG: %d\n", (int) trie_lookup(codoncount, "CCG"));
    printf("CAT: %d\n", (int) trie_lookup(codoncount, "CAT"));
    printf("CAC: %d\n", (int) trie_lookup(codoncount, "CAC"));
    printf("CAA: %d\n", (int) trie_lookup(codoncount, "CAA"));
    printf("CAG: %d\n", (int) trie_lookup(codoncount, "CAG"));
    printf("CGT: %d\n", (int) trie_lookup(codoncount, "CGT"));
    printf("CGC: %d\n", (int) trie_lookup(codoncount, "CGC"));
    printf("CGA: %d\n", (int) trie_lookup(codoncount, "CGA"));
    printf("CGG: %d\n", (int) trie_lookup(codoncount, "CGG"));
    printf("ATT: %d\n", (int) trie_lookup(codoncount, "ATT"));
    printf("ATC: %d\n", (int) trie_lookup(codoncount, "ATC"));
    printf("ATA: %d\n", (int) trie_lookup(codoncount, "ATA"));
    printf("ATG: %d\n", (int) trie_lookup(codoncount, "ATG"));
    printf("ACT: %d\n", (int) trie_lookup(codoncount, "ACT"));
    printf("ACC: %d\n", (int) trie_lookup(codoncount, "ACC"));
    printf("ACA: %d\n", (int) trie_lookup(codoncount, "ACA"));
    printf("ACG: %d\n", (int) trie_lookup(codoncount, "ACG"));
    printf("AAT: %d\n", (int) trie_lookup(codoncount, "AAT"));
    printf("AAC: %d\n", (int) trie_lookup(codoncount, "AAC"));
    printf("AAA: %d\n", (int) trie_lookup(codoncount, "AAA"));
    printf("AAG: %d\n", (int) trie_lookup(codoncount, "AAG"));
    printf("AGT: %d\n", (int) trie_lookup(codoncount, "AGT"));
    printf("AGC: %d\n", (int) trie_lookup(codoncount, "AGC"));
    printf("AGA: %d\n", (int) trie_lookup(codoncount, "AGA"));
    printf("AGG: %d\n", (int) trie_lookup(codoncount, "AGG"));
    printf("GTT: %d\n", (int) trie_lookup(codoncount, "GTT"));
    printf("GTC: %d\n", (int) trie_lookup(codoncount, "GTC"));
    printf("GTA: %d\n", (int) trie_lookup(codoncount, "GTA"));
    printf("GTG: %d\n", (int) trie_lookup(codoncount, "GTG"));
    printf("GCT: %d\n", (int) trie_lookup(codoncount, "GCT"));
    printf("GCC: %d\n", (int) trie_lookup(codoncount, "GCC"));
    printf("GCA: %d\n", (int) trie_lookup(codoncount, "GCA"));
    printf("GCG: %d\n", (int) trie_lookup(codoncount, "GCG"));
    printf("GAT: %d\n", (int) trie_lookup(codoncount, "GAT"));
    printf("GAC: %d\n", (int) trie_lookup(codoncount, "GAC"));
    printf("GAA: %d\n", (int) trie_lookup(codoncount, "GAA"));
    printf("GAG: %d\n", (int) trie_lookup(codoncount, "GAG"));
    printf("GGT: %d\n", (int) trie_lookup(codoncount, "GGT"));
    printf("GGC: %d\n", (int) trie_lookup(codoncount, "GGC"));
    printf("GGA: %d\n", (int) trie_lookup(codoncount, "GGA"));
    printf("GGG: %d\n", (int) trie_lookup(codoncount, "GGG"));
}

void count_codons(const void * sequence)
{
    const char * valid_characters = "ACTG";
    char codon[4];
    
    Trie * codoncount = trie_new();
    
    unsigned long seq_length = strlen(sequence) - 2;
    
    printf("Counting Sequence of Length:  %lu\n", seq_length+2);
    
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
            currentcount++;
            trie_insert(codoncount, codon, currentcount);
        }
    }
    
    float endTime = (float)clock()/CLOCKS_PER_SEC;
    float timeElapsed = (endTime - startTime);
    
    display_codons(codoncount);
    
    printf("%f seconds counting codons\n", timeElapsed);
    
    printf("%d entries\n", trie_num_entries(codoncount));
    
    trie_free(codoncount);

}


int main(int argc, const char * argv[]) {

    void * testseq = "TTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGGTTTTTCTTATTGTCTTCCTCATCGTATTACTAATAGTGTTGCTGATGGCTTCTCCTACTGCCTCCCCCACCGCATCACCAACAGCGTCGCCGACGGATTATCATAATGACTACCACAACGAATAACAAAAAGAGTAGCAGAAGGGTTGTCGTAGTGGCTGCCGCAGCGGATGACGAAGAGGGTGGCGGAGGG";
    

    int fd = open("./cow.seq", O_RDONLY);
    long long len = lseek(fd, 0, SEEK_END);
    void *data = mmap(0, len, PROT_READ, MAP_PRIVATE, fd, 0);
    
    count_codons(testseq);
    count_codons(data);
    
    close(fd);
    return 0;
}


