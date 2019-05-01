#include "stdio.h"
#include "stdbool.h" 

/**
  * Check if the number specified is prime
  * param : n number to check if prime
  * return true if prime, false otherwise
  */
static bool sIsPrime(unsigned int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }

    else if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    
    for (unsigned int i = 5; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}


int main (int argc, char* argv[])
{
    unsigned int prime = 3;
    unsigned int count = 2;
    unsigned int targetIndex = 10001;  

    do
    {
        prime++;
        if (sIsPrime(prime))
        {
            count++;
        }
    } while (count < targetIndex);

    printf("the %u prime is : %u\n", targetIndex, prime);
}
