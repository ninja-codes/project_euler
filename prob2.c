#include "stdio.h"

int main(int argc, char const *argv[])
{
    unsigned int limit = 4000000;
    unsigned int num1 = 2;
    unsigned int num2 = 3;
    unsigned int sum = 2;
    unsigned int nextFeb = 0;

    while (nextFeb < limit)
    {
        nextFeb = num1 + num2;
        if (nextFeb % 2 == 0)
        {
            sum +=nextFeb;
        }
        num1 = num2;
        num2 = nextFeb;
    }

    printf("sum = %u", sum);
    return 0;
}
