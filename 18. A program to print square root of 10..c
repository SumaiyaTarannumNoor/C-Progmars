#include<stdio.h>
#include<math.h> /* needed by sqrt() */

int main(void)
{
    double answer;

    answer = sqrt(10.0);
    printf("%f", answer); //printf("%f", sqrt()10.0), we could only use this line.

    return 0;
}
