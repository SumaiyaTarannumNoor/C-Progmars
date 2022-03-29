#include <stdio.h>

int main(void)
{
    int answer;

    printf("What is 10 + 14?: ");
    scanf("%d", &answer);

    if(answer == 10+14) printf("Right");
    if(answer!= 10+14) printf("Wrong");

    return 0;
}
