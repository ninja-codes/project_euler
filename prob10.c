#include "stdio.h"
#include "prime.h"

int main (int argc, char * argv[])
{
    const unsigned int kLimit = 2000000;
    unsigned long sum = 10;
    unsigned long num = 6;
    do 
    {
        if (isPrime(num))
        {
            sum+=num;
        }
        num++;
    } while (num < kLimit);
    
    printf("The sum of primes below %u : %lu \n", kLimit, sum);    
    
    return 0;

}
