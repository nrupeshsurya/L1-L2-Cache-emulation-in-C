#include "interface.h"
#include<stdio.h>
struct Result* memtest(int* BobMem,struct Result* res, FILE* fp1, FILE *fp2, int K)
{
    // printf("here before the crash");
    // printf("%dasdasdasdasdasd",bob->K);
    while (!feof(fp1))
    {
        int op;
        fscanf(fp1,"%d",&op);
        if(op==1)
        {
            int num;
            fscanf(fp1,"%d",&num);
            addToMemory(res,BobMem,K,num);
        }
        else if(op==2)
        {
            printMemoryState(fp2,BobMem,res,K);
        }
        else if(op==3)
        {
            printScore(res,fp2);
        }
        else
        {
            fprintf(fp2,"Last attempt number was:%d Error[queryHandler fails]:Unknown Query Type.\n",res->attempts);
        }
    }
    return res;
    
}