#include <stdio.h>

int main (void)
{
    //count *num+88/val-19%count

    int count= 5;
    int num= 6;
    int val= 7;

    int result;

    printf ("result= %d",(count * num) + (88/val) - (19 % count));

    return 0;
}
