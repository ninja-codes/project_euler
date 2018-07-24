// 20-> 20,2,4,5,10
// 19-> 19
// 18-> 9,18,3,6
// 17 -> 17
// 16->8,16
// 15->15
//14-> 7,14
//13->13
//12->12
// 11-> 11
#include "stdio.h"
#include "stdbool.h"

int main(int argc, char const *argv[])
{
    unsigned long long target = 21;
    bool done = false;
    while(!done)
    {
        // you only need to check if the number is divisable by these
        // since all others are just factors of those
        if (target % 11 == 0 && target % 12 == 0 && target % 13 == 0
         && target % 14 == 0 && target % 15 == 0 && target % 16 == 0
         && target % 17 == 0 && target % 18 == 0 && target % 19 == 0
         && target % 20 == 0
      )
      {
          done = true;
          break;
      }
      target++;
    }
    printf("number %llu\n", target);
    return 0;
}
