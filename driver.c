#include<stdio.h>
#include<stdlib.h>
#include "interface.h"

int main(int argc, char*argv[])
{
    int K = atoi(argv[1]);
    if(K<2||K>5)
    {
        printf("ERROR [Invalid value of K]");
        exit(0);
    }
    FILE *fp,*fp2,*fp1;
    fp = fopen(argv[2],"r");
    int *BobMem = (int*)malloc(K*sizeof(int));
    struct Result* res = initializeMemory(fp,BobMem,K);
    fp1 = fopen(argv[3],"r");
    fp2 = fopen(argv[4],"w");
    res = memtest(BobMem,res,fp1,fp2,K);
    fprintf(fp2,"Final Score: %d and Attempts: %d",res->score,res->attempts);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}