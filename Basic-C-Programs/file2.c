//Reading a file through fgets() function....

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[10];
    FILE *fp;
    fp = fopen("f1.txt","r");

    if(fp == NULL){
        printf("FILE not found");
    exit(1);
    }
    while(fgets(str,9,fp)!=NULL)//fgets takes 3 arguments address of array, number of character want to read at a time and a file pointer
    {
        printf("%s",str);
    }
    fclose(fp);
    getch();
}
