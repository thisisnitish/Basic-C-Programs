//Program to print a table of any number...
//By- Nitish Kumar          Date- 20/nov/2018

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,N,n,c;
    printf("Enter the number which you want to create the table: ");
    scanf("%d",&n);
    printf("Enter the number till you want to create the table: ");
    scanf("%d",N);
    for(i=1;i<=N;i++)
    {
        c=n*i;
        printf("%d\n",c);
    }
    getch();
}
