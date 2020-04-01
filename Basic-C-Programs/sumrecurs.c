//Program to print the sum of all digits of a number...
//By- Nitish Kumar                Date-26/nov/2018

#include<stdio.h>
#include<conio.h>
int add(int);
void main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);

    int sum=add(no);
    printf("Sum of all digits of a number is: %d",sum);
    getch();
}
int add(int no)
{
    if(no>0)
    {
        int r=no%10;
        r=r+add(no/10);
        return r;
    }
}
