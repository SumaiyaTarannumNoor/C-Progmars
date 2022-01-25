#include <stdio.h>

double get_sqr(void);

int main(void)
{
    double sqr;

    sqr = get_sqr();
    printf("Square: %lf", sqr);

    return 0;
}

double get_sqr(void)
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);
    return num*num; /*square the number */
}
