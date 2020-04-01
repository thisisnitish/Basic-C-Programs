//Program to check number is an Armstrong number is or not...
#include<stdio.h>
int main()
{
    int n,s,x,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    s=0;
    x=n;
    while(x!=0)
    {
    r=x%10;
    s=s+r*r*r;
    x=x/10;
    }
    if(s==n)
        printf("Given number is an Armstrong Number");
    else
        printf("Given number is not an Armstrong Number");
    return 0;
}
