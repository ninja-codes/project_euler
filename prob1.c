#include "stdio.h"
int main(int argc, char const *argv[])
{
    unsigned int limit = 1000;
    unsigned int num1 = 3;
    unsigned int num2 = 5;
    unsigned int sum = 8; // 3 + 5
    unsigned int itr = 6;
    while (itr < limit)
    {
        if ((itr % num1 == 0)  || (itr % num2 == 0) )
        {
            sum += itr;
        }
        itr++;
    }
    
    printf("sum = %u\n", sum);
    return 0;
}
