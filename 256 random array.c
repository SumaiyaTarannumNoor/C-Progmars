/*square matrix multiplication with random matrix.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, m1, n1, m2, n2, x, y;
	int k, arr1[300][300],arr2[300][300], multiply[300][300], sum;

    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m1);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n1);

    for(i = 0; i<m1;i++) {
    	for(j = 0; j<n1;j++) {

    		arr1[i][j]=rand()%100;
    		printf("%d\t", arr1[i][j]);
    	}
    	printf("\n");
    }

    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m2);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n2);

    for(x = 0; x < m2;x++) {
    	for(y = 0; y < n2;y++) {

    		arr2[x][y]=rand()%100;
    		printf("%d\t", arr2[x][y]);
    	}
    	printf("\n");
    }

       for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n1;k++)
                multiply[i][j]=0;
            {
                multiply[i][j]= multiply[i][j]+ arr1[i][k]*arr2[k][j];//it doesn't produce any product

            }
            //multiply[i][j] = sum;
            //sum = 0;
        }
    }

        printf("Product of the matrices: %d \n", multiply[i][j]);

    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++)
      {
        printf("%d\t", multiply[i][j]);

      }
         printf("\n");

      }


	return 0;
}
