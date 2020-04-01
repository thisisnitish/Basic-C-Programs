//Program to print transpose of matrix...
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[3][4],B[4][3],i,j;
    printf("Enter the elements in the matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            {
          scanf("%d",&A[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
         {
             printf("%d ",A[i][j]);
             }
             printf("\n");
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            B[i][j]=A[j][i];          //A[i][j]
        }
        printf("\n");
    }

    printf("Transposed Matrix is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

getch();
}
