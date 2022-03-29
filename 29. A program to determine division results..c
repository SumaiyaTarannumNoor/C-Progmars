#include <stdio.h>

int main(void)
{
    float num1, num2;

     printf("Enter the first number: ");
     scanf("%f", &num1);

     printf("Enter the second number: ");
     scanf("%f", &num2);

     if(num2 == 0) printf("Can not  be divided by zero.\n Undefined");
     else printf("Answer is: %f", num1 / num2);

     return 0;
}
