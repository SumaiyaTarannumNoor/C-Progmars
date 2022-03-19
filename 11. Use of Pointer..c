#include <stdio.h>

int main(void)
{
    int m=2;
    int n=1;

    int *ptr1,*ptr2;

    ptr1 = &m;
    ptr2 = &n;

    int result;

    result= *ptr1+*ptr2;

    printf("Result is %d", result);

    return 0;
}
