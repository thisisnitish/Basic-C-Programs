#include<stdio.h>
#include<conio.h>
void main()
{
    int yr;
    printf("Enter the year to check that is leap year or not: ");
    scanf("%d",&yr);

    if(yr%100==0)
    {
        if(yr%400==0)
            printf("Year is a leap year.");
        else
            printf("Not a leap year.");
    }
    else
    {
    if(yr%4==0)
        printf("Year is a leap year.");
    else
        printf("Not a leap year.");
    }
getch();
}
