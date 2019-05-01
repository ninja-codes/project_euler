#include "stdio.h"
#include "string.h"

int main (int argc, char * argv[])
{
    const unsigned int kSum = 1000;
    unsigned int a;
    unsigned int b;
    unsigned int c;

    for (unsigned int b = 500; b > 0; b--)
    {
        for (unsigned int a = b - 1; a > 0;a--)
        {
            if ((2 * a * b - 2000 * a - 2000 * b + 1000 * 1000) == 0)
            {
                if ((kSum - a - b) > b)
                { 
                   c = kSum - a - b;
                   const unsigned long prod = a * b * c; 
                   printf("The product of triplet %u, %u, %u, %lu\n", a, b, c, prod);
                   return 0;
                }
            }
        }
    }
    return 0;
    
}
