//Program to check number is a palindrome or not...
//By-Nitish Kumar         Date-12/dec/2018
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y=0,z,r;

    printf("Enter the number which you want to reverse.\n");
    scanf("%d",&x);

    r=x;
    while(r!=0)
    {
        z=r%10;
        y=y*10+z;
        r=r/10;
    }

    if(x==y)
        printf("Number is a palindrome.\n");
    else
        printf("Number is not a palindrome.");

    getch();
}
