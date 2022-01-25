#include <stdio.h>

int main(void)
{
    int i, j, m, n, k, sum=0;
    int arr1[2][2], arr2[2][2], multiply[2][2];


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element of first matrix %d %d: ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            printf("Enter the element of second matrix %d %d:", m,n);
            scanf("%d", &arr2[m][n]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                sum= sum + arr1[i][k]*arr2[m][k];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }

    printf("Product of the matrices: %d \n", sum);

    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++)
      {
        printf("%d\t", multiply[i][j]);

      }
         printf("\n");

      }
  return 0;

}
