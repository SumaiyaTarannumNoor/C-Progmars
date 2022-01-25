
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, m1, n1, m2, n2, x, y;
	int k, arr1[300][300],arr2[300][300], multiply[300][300];
	struct timeval start, end;

    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m1);
    printf("Enter the column dimension of the matrix: ");
    Scanf("%d", &n1);

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
    if(n1!=m2){
        printf("dimension error\n");
        return 0;
    }

    for(x = 0; x < m2;x++) {
    	for(y = 0; y < n2;y++) {
    		arr2[x][y]=rand()%100;
    		printf("%d\t", arr2[x][y]);
    	}
    	printf("\n");
    }

     gettimeofday(&start, NULL);
       for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            multiply[i][j]=0;
            for(k=0;k<n1;k++)
            {
                multiply[i][j]= multiply[i][j]+ arr1[i][k]*arr2[k][j];
            }
        }
    }
    gettimeofday(&end, NULL);
    double diff = end.tv_sec + end.tv_usec / 1e6 - start.tv_sec - start.tv_usec / 1e6;

    printf("Product of the matrices: \n");

    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++)
      {
        printf("%d\t", multiply[i][j]);

      }
      printf("\n");

    }
    printf("Matrix Computation run time is: %f", diff);

    return 0;
}
