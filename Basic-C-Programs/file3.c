//writing in a file from fputs() function..

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[20];
    FILE *fp;
    fp = fopen("f1.txt","w");

    printf("Enter your name: ");
    gets(str);
    fputs(str,fp);   //take the array and the file pointer....
    fclose(fp);
    getch();
}
