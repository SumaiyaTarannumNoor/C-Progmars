#include <stdio.h>

int main(void)
{
    int count, answer;

    count = 1;

    printf("What is %d + %d? ", count, count  );
    scanf("%d", &answer);

    if(answer != count + count)
        {
            printf("Wrong");

        }

    else
    {
        for(count = 2; count<11; count++)
            {
                printf("What is %d + 1? ", count );
                scanf("%d", &answer);

                if(answer != count + 1)
                {
                    printf("Wrong");
                    break;
                }

            }
    }
}
