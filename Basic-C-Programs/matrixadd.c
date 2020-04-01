#include<stdio.h>
#include<conio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter the elements in first matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
           scanf("%d",&A[i][j]);

    printf("Enter the elements in second matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);

    printf("Addition of matrix is: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    getch();
}
