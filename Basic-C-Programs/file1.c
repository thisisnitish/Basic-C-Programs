//reading from a file using getc function
//here reading process will be from character by character

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch;
    FILE *fp;

    fp = fopen("f1.txt","r");   //opening the file in reading mode... r means read
    if(fp == NULL){
        printf("File not found");
        exit(1);
    }
    //to read file we will use a function fgetc()...
    ch = fgetc(fp);    //it return a character which is present in the first byte of the file
    while(!feof(fp)){     //feof() is used to check the end of file it returns True or False (1,0)...
        printf("%c",ch);
        ch = fgetc(fp);   //here fgetc() reading the next character present in the file
    }
    fclose(fp);
    getch();
}
