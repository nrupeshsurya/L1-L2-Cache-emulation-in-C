#include<stdlib.h>
#include<stdio.h>
#ifndef _BST_HEADER
#define _BST_HEADER
struct Result{
    int attempts,score;
};


struct Result* initializeMemory(FILE *fp,  int *BobMem, int K);
int checkforduplicates(int* BobMem, int num, int K);
struct Result* memtest(int* BobMem, struct Result* res, FILE* fp1, FILE *fp2, int K);
void printMemoryState(FILE* fp2, int* BobMem,struct Result* res, int K);
void addToMemory(struct Result* res, int* BobMem, int K, int num);
void printScore(struct Result* res, FILE* fp2);
#endif