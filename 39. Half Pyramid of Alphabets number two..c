#include <stdio.h>

int main(void)
{
    int i, j;
    char input, alphabet= 'A';

    printf("Enter the letter you want to see on the last row of the pyramid: ");
    scanf("%c", &input);

    for(i=1; i<= (input- 'A'+1); i++)
    {
        for(j=1; j<=i; j++)
            {
                printf("%c", alphabet);
            }
        alphabet++;
        printf("\n");
    }
    return 0;
 }
