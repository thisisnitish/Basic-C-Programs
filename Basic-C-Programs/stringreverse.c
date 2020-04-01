#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20],t;
    int l,i;
    printf("Enter the string: ");
    gets(s);

    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;
    }

    printf("Reversed string is: %s",s);

    getch();
}
