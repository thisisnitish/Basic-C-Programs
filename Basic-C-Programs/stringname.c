#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter the size of the string: ");
    scanf("%d",&size);

    char s[size];
    printf("Enter the string: ");
    gets(s);

    return 0;
}
