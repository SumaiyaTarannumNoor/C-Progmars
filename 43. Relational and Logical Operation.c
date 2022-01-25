#include <stdio.h>

int main (void)
{
    int i, j;
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ");
    scanf("%d", &j);

    //relational operation
    printf("i < j %d\n", i<j);
    printf("i <= j %d\n", i<=j);
    printf("i == j %d\n", i==j);
    printf("i > j %d\n", i>j);
    printf("i >= j %d\n", i>=j);

    //logical operation
    printf("i && j %d\n", i&&j);
    printf("i || j %d\n", i||j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}
