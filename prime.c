#include "stdio.h"
#include "stdbool.h"

#include "prime.h"

bool isPrime(const unsigned long num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }

    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    
    for (unsigned long i = 5; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
