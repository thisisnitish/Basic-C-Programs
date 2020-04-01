#include<stdio.h>
#include<conio.h>
void main()
{
    int rows,i,j,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=2*rows-1;i++)
    {
        i<=rows?k++:k--;
        for(j=1;j<=2*rows-1;j++)
        {
            if(j<=rows+1-k || j>=k+rows-1)
                    printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
getch();
}
