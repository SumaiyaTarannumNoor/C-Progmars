#include <stdio.h>

int main(void)
{
    int count, temp, i, j, number[30];

    printf("How many numbers are you going to enter?: ");
    scanf("%d", &count);

    printf("Enter numbers: ", count);

    for(i=0; i<count ; i++)
        scanf("%d", &number[i]);

    /*This is the main logic for bubble sort algorithm */

    for(i=count-2; i>=0 ; i--)
    {
        for(j=0 ; j<=i ; j++)
        {
            if(number[j] > number [j+1]){
            temp = number[j];
            number [j] = number [j + 1];
            number[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements: ");
    for(i=0; i<count; i++)
        printf("%d", number[i]);

    return 0;
}
