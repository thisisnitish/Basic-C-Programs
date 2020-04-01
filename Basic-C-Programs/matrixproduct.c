//Program to Print the multiplication of matrix.......

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int row1,row2,col1,col2,i,j,k,sum=0;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d",&row1,&col1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d",&row2,&col2);

    int a[row1][col1],b[row2][col2],c[row1][col2];

    printf("Enter the elements in the first matrix:\n");

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%2d",&a[i][j]);
        }
    }
    printf("Enter the elements in the second matrix:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%2d",&b[i][j]);
        }
    }
    if(col1!=row2)
    {
        printf("Multiplication of Matrix is not possible.\n");
        getch();
        exit(0);
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0;k<row2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
                c[i][j]=sum;
                sum=0;
            }
        }

    printf("Multiplication of Matrix is:\n");

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
