#include <stdio.h>

int main(){
int i;
double number, sum =0.0;

for(i=1; i<10 ; i++){
    printf("Enter Number: ");
    scanf("%lf", &number);

    //if user enters a negative number , break
    if (number < 0.0){
        break;
    }

    sum+=number; //sum = sum + number;
}

printf("Sum = %.2lf", sum);

return 0;
}
