#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=i;
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-i && j<=i+rows-1)
            {
                printf("%d ",k);
                j<rows?k--:k++;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
getch();
}
