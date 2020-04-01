#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,p=0,s,r,x;
    printf("Enter any number to check it is Armstrong number or not:\n");
    scanf("%d",n);
    while(n!=0)
    {
        d=n%10;
        p=p+1;
        n=n/10;
    }
    s=0;
    x=n;
    while(x!=0)
    {
        r=x%10;
        s=s+pow(r,p);
        x=x/10;
    }
    if(s==n)
        printf("Given number is an Armstrong number\n");
    else
        printf("Given number is not an Armstrong number\n");
    return 0;
}
