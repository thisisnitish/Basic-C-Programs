#include<stdio.h>
#include<conio.h>
int large(int*,int*);
void main()
{
    int no1,no2,big;
    printf("Enter the numbers: ");
    scanf("%d%d",&no1,&no2);
    big=large(&no1,&no2);
    printf("Large number is: %d",big);
    getch();
}

int large(int *no1,int *no2)
{
    if(*no1>*no2)
        return *no1;
    else
        return *no2;
}
