#include "stdio.h"
#include "stdbool.h"

static bool sIsPrime(unsigned long long num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    else
    {
        for (unsigned long long i = 2; i * i < num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main(int argc, char const *argv[])
{
    unsigned long long num = 600851475143UL;
    unsigned long long i = 2;
    unsigned long long factor = 0;
    while (i * i < num)
    {
        if (num % i == 0 && sIsPrime(i))
        {
            factor = i;
        }
        i++;
    }
    printf("largest prime factor of %llu is %llu", num, factor);
    return 0;
}
