//Program to find the decimal conversion of a binary number....
//Date-2/jan/2019

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int no,count,sum,x;

    printf("Enter the binary number:");
    scanf("%d",&no);

    count=0;
    sum=0;
    while(no!=0)
    {
        x=no%10;
        sum=sum+x*pow(2,count);
        no=no/10;
        count++;
    }
    printf("Binary to Decimal conversion is: %d",sum);

getch();
}
