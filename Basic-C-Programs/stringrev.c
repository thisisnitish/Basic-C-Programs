#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50];

    printf("Enter the string: ");
    gets(s1);

    strrev(s1);

    printf("Reversed string is %s",s1);
getch();
}
