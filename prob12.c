#include "stdio.h"
#include "prime.h"

static unsigned int sCountDiv(unsigned long triNum)
{
    unsigned int totalCount = 1;
    
    for (unsigned long i = 2; i * i <= triNum; i++)
    {
        unsigned int countPerPrime = 0;

        while (triNum % i == 0)
        {
            triNum /= i;
            countPerPrime++;            
        }
        
        totalCount = totalCount * (countPerPrime + 1);

        if (isPrime(triNum))
        {    
            totalCount *= 2;
            break;
        }
        
    }
    return totalCount;
}

int main (int argc, char * argv)
{
    unsigned int targetDiv = 500;
    unsigned long numIx = 4;
    unsigned long triNum = 10;

    while (sCountDiv(triNum) < targetDiv)
    {
        numIx++;   
        triNum = (numIx * (numIx + 1)) >> 1;
    }
     
    printf("tri num %lu\n", triNum);
    return 0;
}
