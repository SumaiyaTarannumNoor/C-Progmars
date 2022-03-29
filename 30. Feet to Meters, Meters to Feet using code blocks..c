#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("1: Feet to Meters, 2: Meters to Feet. ");
    printf("\n Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter feet value: ");
        scanf("%f", &num);

        printf("Meters: %f", num / 3.28);
        }

    else{
        printf("Enter number of meters: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28);
    }

    return 0;
}
