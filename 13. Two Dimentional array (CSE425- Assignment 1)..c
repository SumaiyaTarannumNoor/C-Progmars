#include <stdio.h>
#include <math.h>

float circleArea(float r);
float circlePerimeter(float r);

int main(void)
{
    int arr[5][5], i,j,k;
    float *r;
    float area;
    float perimeter;
    r= *arr;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter the values in the array [%d] [%d]:", i,j,r);
            scanf("%d", &arr[i][j]);
        }
    }

    //To display
    printf("The array elements are: \n");
    for(i=0;i<5; i++)
    {
        //printf("\n");
        for(j=0;j<5;j++)
        {
            printf("%d", arr[i][j]);

        }
        printf("  \n");
    }
//The code snippet below are for user defined function. But, these code don't show results properly.
//Thus, they are commented out.
/*for(k=0;k<25;k++)
    {
        printf("Area of the circle: %f", cicleArea(r));
        printf("\n");
    }

    for(k=0;k<25;k++)
    {
        printf("Perimeter of the circle: %f", ciclePerimeter(r));
        printf("\n");
    }*/


    return 0;
}
  float circleArea(float r)
    {

            float area;
            area= 3.14 * r * r;
            return area;


    }
     float circlePerimeter(float r)
    {

            float perimeter;
            perimeter = 2* 3.14 * r;
            return perimeter;


    }

