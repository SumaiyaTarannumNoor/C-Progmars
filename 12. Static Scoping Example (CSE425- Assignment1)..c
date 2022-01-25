//Name: Sumaiya Tarannum Noor; ID- 1721561642; Sec- 03; Faculty: Msk1
//Assignment No 1- Problem No. 1
// A Program to demonstrate the concept of Static Scoping in C programming language.

#include <stdio.h>

int x=100;

int main (void)
{
  printf("\n");
  printf("The  number is %d.", func1());
  printf("\n");

  return 0;
}

int func1()
{
    int x=50;
    return func2();
}

int func2()
{
    int x= 25;
    return func3();
}

int func3()
{
    return x;
}
