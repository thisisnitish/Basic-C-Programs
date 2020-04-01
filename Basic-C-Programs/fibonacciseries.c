//Program to print fibonacci series....

#include<stdio.h>
#include<conio.h>
void main()
{
    int a=-1,b=1,c,i,N;

    printf("Enter the number of terms you want: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
getch();
}
