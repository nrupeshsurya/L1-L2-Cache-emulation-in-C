#include "interface.h"
#include<stdio.h>
struct Result* initializeMemory(FILE *fp, int* BobMem, int K)
{
    // printf("\ntest\n");
    struct Result* res = (struct Result*)malloc(sizeof(struct Result));
    res->score = 0;
    res->attempts=0;
    for (int i = 0; i < K; i++)
    {
        BobMem[i]=-1;
    }
    int trav=0;
    while (!feof(fp)&&trav!=K)
    {
        int t;
        fscanf(fp,"%d",&t);
        if(!checkforduplicates(BobMem,t, K))
        {
            BobMem[trav]=t;
            trav++;
        }
    }
    // printf("\ntest\n");
    return res;
}