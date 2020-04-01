#include<stdio.h>
#include<conio.h>
int GCD(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers to find the GCD: ");
    scanf("%d%d",&x,&y);
    printf("GCD of the given number is %d ",GCD(x,y));
    getch();
}
int GCD(int a,int b)
{
    if(a==b)
        return(a);
    if(a%b==0)
        return(b);
    if(b%a==0)
        return(a);
    if(a>b)
        return(GCD(a%b,b));
    else
        return(GCD(a,b%a));
}
