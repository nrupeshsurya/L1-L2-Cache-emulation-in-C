#include "interface.h"
#include<stdio.h>
void printScore(struct Result* res, FILE* fp2)
{
    fprintf(fp2,"Current Score: %d and Attempts: %d\n",res->score,res->attempts);
}