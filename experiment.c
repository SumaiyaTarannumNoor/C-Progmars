#include<stdio.h>

number (int *n);

int main()
{
 int num;
 scanf("%d", &num);
 number(&num);
 return 0;
}

int number(int *n)
{
 if(*n==0){
    printf("0");
 }

 else
    *n=*n-1;
   printf("%d", *n);
 }
