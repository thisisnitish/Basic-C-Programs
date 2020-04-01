//Program to reverse a number....
//By-Nitish Kumar   Date-12/dec/2018

#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y=0,z;

    printf("Enter the number which you want to reverse.\n");
    scanf("%d",&x);

    while(x!=0)
    {
        z=x%10;
        y=y*10+z;
        x=x/10;
    }

    printf("Reversed number is: %d",y);
    getch();
}
