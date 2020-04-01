#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=1;
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
getch();
}
