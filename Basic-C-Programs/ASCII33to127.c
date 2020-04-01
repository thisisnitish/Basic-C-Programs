#include<stdio.h>
#include<conio.h>
void main()
{
    char c;

    printf("Enter the character: ");
    scanf("%c",&c);

    if(c>=33 && c<=127)
    {
        printf("%d",c);
    }
    else
        printf("ASCII code is less than 33");
getch();
}
