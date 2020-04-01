#include<stdio.h>
#include<conio.h>
void main()
{
    int a=100;
    int b=101;
    char h='a';
    h=a-h;
    char d='a';
    d=b-d;
    while(a)
    {
        printf("%c %c ",h,d);
        a--;
    }
    getch();
}
