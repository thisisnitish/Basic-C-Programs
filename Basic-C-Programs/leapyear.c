//Program to check a leap year...

#include<stdio.h>
#include<conio.h>
void main()
{
    int yr;

    printf("Enter the year to check that is leap year or not: ");
    scanf("%d",&yr);

    if(yr%4)
        printf("Not a leap year.");
    else if(yr%100)
            printf("Year is a leap year.");
    else if(yr%400)
        printf("Not a leap year.");
    else
        printf("Year is a leap year.");
getch();
}
