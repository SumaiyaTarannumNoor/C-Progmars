#include<stdio.h>
#include <time.h>
int main()
{

    int arr1[300][300],arr2[300][300],matrix[300][300],*p[300],*q[300],*r[300],sum, m1, n1, m2, n2, i, j,k;
    struct timeval start, end;

    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m1);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n1);

    printf("Enter the element for first matrix: \n");

    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){

            scanf("%d",&arr1[i][j]);
        }
    }


    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m2);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n2);
    if(n1!=m2){
        printf("dimension error\n");
        return 0;
    }
    printf("Enter the element for second matrix: \n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }


    for(int i=0;i<m1;i++) p[i]=&arr1[i][j];
    for(int i=0;i<m1;i++) q[i]=&arr2[i][j];
    for(int i=0;i<m1;i++) r[i]=&matrix[i][j];


    gettimeofday(&start, NULL);
    for(int i=0;i<m1;i++){
        for(j=0;j<n2;j++){
             *(*(r+i)+j) = 0;
            for(k=0;k<n1;k++){
                *(*(r+i)+j) +=  *(*(p+i)+k) * *(*(q+k)+j);
             }
        }
      }
    gettimeofday(&end, NULL);
    double diff = end.tv_sec + end.tv_usec / 1e6 - start.tv_sec - start.tv_usec / 1e6;


    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
     printf("Matrix Multiplication run time is: %f", diff);
     return 0;

}
