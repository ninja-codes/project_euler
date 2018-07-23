#include "stdio.h"
#include "stdbool.h"

static bool sIsPalindrome(unsigned int num)
{
    unsigned int temp = num;
    unsigned int len = 0;

    // find the number of characters in a number
    while (temp > 0)
    {
        temp = temp / 10;
        len++;
    }
    // convert unsigned num -> str
    char strNum[len];
    sprintf(strNum, "%u",num);

    // compare each pair of numbers
    for (int i = 0; i < len / 2; i++)
    {
        int end = len - i - 1;
        if (strNum[i] != strNum[end])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    unsigned int prod = 0;
    unsigned int largest = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            prod = i * j;
            if (prod > largest && sIsPalindrome(prod))
            {
                largest = prod;
            }
        }
    }
    printf("largest palindrome number made of 3 digits %u", largest);
    return 0;
}
