#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=0,n=1,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=2*rows-1;i++)
    {
        i<=rows?k++:k--;
        n=k-1;
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-k && j<=k+rows-1)
            {
                printf(" %d",j<11?n++%10:n--%10);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
getch();
}
