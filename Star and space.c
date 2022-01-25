#include <stdio.h>

int main(void)
{

    int num;
    int sum;
    int lum;

    for(num = 6; num>=1 ; num--)
    {
       for(sum=1; sum<=num ; sum ++)
       {
           printf(" * ", sum);
       }
      printf("\n");
    }



    return 0;
}

