#include "interface.h"
#include <stdio.h>
int checkforduplicates(int *BobMem, int num, int K)
{
    for(int i=0;i<K;i++)
    {
        if(num==BobMem[i])
        {
            return 1;
        }
    }
    return 0;
}