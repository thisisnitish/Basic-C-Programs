//Program to print the ASCII chart....
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    char c;

    while(i<=131)
    {
        c=i;
        printf("%d %c\n",i,c);
        i++;
    }
getch();
}
