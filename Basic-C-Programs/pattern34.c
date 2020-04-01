#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,p,k=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        p=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            p=p-(rows-i+j);
        }
        printf("\n");
        k=k+1+rows-i;
    }
getch();
}
