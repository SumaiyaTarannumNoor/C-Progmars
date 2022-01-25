#include<stdio.h>

int main()
{

    int arr1[300][300],arr2[300][300],matrix[300][300],*p[300],*q[300],*r[300],sum, m1, n1, m2, n2, i, j;

    // 1st Matrix

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

    // 2nd matrix
    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m2);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n2);
    if(n1!=m2){
        printf("dimension error\n");
        return 0;
    }
    printf("Enter the lement for second matrix: \n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    // Assigning pointers

    for(int i=0;i<m1;i++) p[i]=&arr1[i][j];//0
    for(int i=0;i<m1;i++) q[i]=&arr2[i][j];
    for(int i=0;i<m1;i++) r[i]=&matrix[i][j];

    // Resultant Matrix

    for(int i=0;i<m1;i++){
        *(*(r+i)+sum) = sum ;
        for(sum=0;sum<m1;sum++){
           // printf("%d\t",*(*(r+i)+sum));
             *(*(r+i)+sum) += *(*(p+i)+sum) * *(*(q+sum)+i);
             printf("%d\t",*(*(r+i)+sum));
        }
        //sum = 0;
    }

    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
