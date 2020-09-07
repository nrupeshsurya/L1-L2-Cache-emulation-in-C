#include "interface.h"
#include<stdio.h>
void addToMemory(struct Result* res,int *BobMem, int K, int num)
{
    if(num<1||num>200)
    {
        return;
    }
    if(checkforduplicates(BobMem,num,K)==0)
    {
        for(int i=K-1;i>=1;i--)
        {
            BobMem[i]=BobMem[i-1];
        }
        BobMem[0]=num;
        res->attempts++;
    }
    else
    {
        int pos=0;
        for(int i=0;i<K;i++)
        {
            if(BobMem[i]==num)
            {
                pos=i;
                break;
            }
        }
        if(pos!=0)
        {
            for(int i=pos;i>=1;i--)
            {
                BobMem[i]=BobMem[i-1];
            }
        }
        BobMem[0] = num;
        res->attempts++;
        res->score++;
    }
    
}