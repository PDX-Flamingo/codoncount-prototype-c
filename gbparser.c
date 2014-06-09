#include "main.h"

// String Functions
int prefix(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre));
}

char *covertToUpper(char *str){
    char *newstr, *p;
    p = newstr = strdup(str);
    while(*p++=toupper(*p));

    return newstr;
}

static char *getQualValue(char *sQualifier, gb_feature *ptFeature) {
    static char *null = "";
    gb_qualifier *i;

    for (i = ptFeature->ptQualifier; (i - ptFeature->ptQualifier) < ptFeature->iQualifierNum; i++)
        if (strcmp(sQualifier, i->sQualifier) == 0)
            return i->sValue;
    return null;
}

static char *getTaxonQualValue(char *sQualifier, gb_feature *ptFeature) {
    static char *null = "";
    gb_qualifier *i;

    for (i = ptFeature->ptQualifier; (i - ptFeature->ptQualifier) < ptFeature->iQualifierNum; i++)
        if (strcmp(sQualifier, i->sQualifier) == 0 && prefix("taxon", i->sValue) == 0)
            return i->sValue;
    return null;
}

int parse_genbank()
{
    char *sSequence = NULL;

    gb_data **pptSeqData, *ptSeqData;
    gb_feature *ptFeature;

    pptSeqData = parseGBFF(NULL); /* parse a GBF file which contains more than one GBF sequence data */

    //remove("./output.json");
    //FILE * outputfp = fopen("./output.json", "a");

    for (int i = 0; (ptSeqData = *(pptSeqData + i)) != NULL; i++) { /* ptSeqData points a parsed data of a GBF sequence data */

        ptFeature = ptSeqData->ptFeatures;

        if (ptSeqData->sSequence != NULL) {
                sSequence = covertToUpper(getSequence(ptSeqData->sSequence, ptFeature));
                //printf("%s\n", ptSeqData->sSource);
                //printf("%s\n", ptSeqData->sAccession);
                //printf("%s\n", ptSeqData->sVersion);
                //printf("%s\n", ptSeqData->sOrganism);
                //printf("%s\n", getTaxonQualValue("db_xref", ptSeqData->ptFeatures));
                //printf("%s\n", sSequence);
                //printf("---\n");

            //fputs(count_codons(ptSeqData->sSource, ptSeqData->sDef, ptSeqData->sVersion, getTaxonQualValue("db_xref", ptSeqData->ptFeatures), sSequence), outputfp);
            printf(count_codons(ptSeqData->sSource, ptSeqData->sDef, ptSeqData->sVersion, getTaxonQualValue("db_xref", ptSeqData->ptFeatures), sSequence));
        }

    }

    //fclose(outputfp);
    freeGBData(pptSeqData); /* release memory space */

    return 0;
}