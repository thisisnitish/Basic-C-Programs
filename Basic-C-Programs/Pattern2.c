//Program to print the pyramid of number....
// By-Nitish Kumar            Date-20/nov/2019                  we can make its general form also....

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,a=1;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=(5-i) && j<=(i+3) && k)
                {
                printf("%d",a);
                k=0;
                a++;
            }
            else
                {
                printf(" ");
                k=1;
                }
        }
        printf("\n");
    }
    getch();
}
