#include<stdio.h>
#include<conio.h>
void main()
{
    int A[3][3],i,j;
    printf("Enter the numbers to form matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
       printf("\n");
    }
    getch();

}
