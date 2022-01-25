#include <stdio.h>

int main(void)
{

    int num;
    int sum;

    for(num = 0; num<=6 ; num= num + 1)
    {
       for(sum=0; sum<=num; sum= sum+1)
       {
           printf(" * ", sum);
       }
       printf("\n");
    }



    return 0;
}
