//writing in a file

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char s[100];
    int i;
    fp = fopen("f1.txt","w");   //opening the file in writing mode... w means write

    if(fp == NULL){
        printf("File cannot open");
        exit(1);
    }

    printf("Enter a string: ");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);    //fputc function allows to write contents from s[i] to fp
    getch();
    fclose(fp);
    getch();
}
