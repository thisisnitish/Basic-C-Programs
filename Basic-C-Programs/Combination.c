//Program for combination of a number...
//By-Nitish Kumar    Date-19/jan/2019

#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
void main()
{
    int n,r,combination;

    printf("Enter the value of n: n>r: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    combination=combi(n,r);
    printf("Combination of numbers is: %d",combination);

    getch();
}
int fact(int no)
{
    int f=1;

    while(no)
    {
        f=f*no;
        no--;
    }
    return f;
}
int combi(int n,int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}
