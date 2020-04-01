#include<stdio.h>
#include<conio.h>
void main()
{
    int a =96;
    char ch='a';
    ch=ch-a;
    while(a)
    {
        printf("%c ",ch);
        a--;
    }
    getch();

}
