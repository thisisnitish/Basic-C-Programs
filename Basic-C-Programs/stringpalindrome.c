//Program to see the string is palindrome or not...
//By- Nitish Kumar         Date-12/dec/2018

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    int cmp;
    printf("Enter the string:\n");
    gets(s1);

    strcpy(s2,s1);
    strrev(s2);

    cmp=strcmp(s1,s2);

    if(cmp==0)
        printf("Entered string is a palindrome\n");
    else
        printf("Entered string is not a palindrome");

    getch();
}
