//Program to check co prime of a number....
//Date-2/jan/2019

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,min;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;

    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            break;
    }

    if(i==min+1)
        printf("%d and %d are co-prime.",a,b);
    else
        printf("%d and %d are not co-prime.",a,b);

getch();
}
