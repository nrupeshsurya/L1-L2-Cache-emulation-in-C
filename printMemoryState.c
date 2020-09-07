#include "interface.h"
#include<stdio.h>
void printMemoryState(FILE* fp2, int* BobMem,struct Result* res, int K)
{
    fprintf(fp2,"Last attempt was:%d\n",res->attempts);
    fprintf(fp2,"Current state is:");
    for(int i=0;i<K;i++)
    {
        fprintf(fp2,"%d ",BobMem[i]);
    }
    fprintf(fp2,"\n");
}