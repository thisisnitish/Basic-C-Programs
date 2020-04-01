//Program to count the digits in a number....
//Date-2/jan/2019

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,x,count;

    printf("Enter the number: ");
    scanf("%d",&no);

    count=0;
    while(no!=0)
    {
        x=no%10;
        count++;
        no=no/10;
    }
    printf("Number of digits in this number is: %d",count);
getch();
}
