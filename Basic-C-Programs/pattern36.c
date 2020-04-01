#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k=k+i-1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
getch();
}
