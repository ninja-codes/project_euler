#include "stdio.h"


int main(int argc, char * argv[])
{
    const unsigned int kLimit = 1000000;
    unsigned int count = 0;
    unsigned int numb = 0;

    for (int j = kLimit - 1; j > 1;j-=2)
    {
        unsigned int num = j;
        unsigned int itrCount = 0;
        while(num != 1)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = 3 * num + 1;
            }
          itrCount++;
        }
        if (itrCount > count)
        {
            count = itrCount;
            numb = j;
        }
    }

    printf("with %u length num %u wins !\n", count, numb);
    return 0;
}
