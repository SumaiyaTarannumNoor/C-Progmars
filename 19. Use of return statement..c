#include<stdio.h>

int func(void); /*prototype*/

int main(void)
{
    int num;

    num = func();

    printf("%d", num);

    return 0;
}

int func(void) //func(void) - we could write this as by default it will be counted as int
{
    return 10;
}
