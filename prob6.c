#include "stdio.h"

int main(int argc, char const *argv[])
{
    unsigned int limit = 10;
    unsigned int sumOfSquare = 0;
    unsigned int squareOfSum = 0;

    for (unsigned int i = 1; i <= limit; i++)
    {
        sumOfSquare+=(i * i);
        squareOfSum+=i;
    }
    squareOfSum*=squareOfSum;

    printf("diff = %u - %u = %u", squareOfSum , sumOfSquare, squareOfSum - sumOfSquare);
    return 0;
}
