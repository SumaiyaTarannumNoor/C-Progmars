#include <stdio.h>

void sum(int x, int y);

int main(void)
{
    sum(10-2, 9*7);
    sum(100*34, 89+1);
    sum(200/2, 400*2);

    return 0;
}

void sum(int x, int y)
{
    printf("%d\n", x+y);
}
