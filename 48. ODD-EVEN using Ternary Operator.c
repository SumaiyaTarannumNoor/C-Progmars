#include <stdio.h>

int main(){
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("%d is an %s number.\n", number, (number%2)? "Odd": "Even");
    return 0;
}
