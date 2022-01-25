#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("This program is to measure length in feet or meters.");
    printf("\nEnter the value: ");
    scanf("%f", &num);

    printf("1: Feet to Meters\n2: Meters to Feet");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if(choice==1) printf("%f", num/3.28);
    if(choice==2) printf("%f", num*3.28);

    return 0;

}
