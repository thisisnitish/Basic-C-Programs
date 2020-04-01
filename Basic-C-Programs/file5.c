//Reading in file by fread()
//fread takes 4 arg...address of b1, size of the b1, number of such record, file pointer

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct books
{
    int bookid;
    char title[20];
    float price;
};

void main()
{
    struct books b1;
    FILE *fp;
    fp = fopen("f2.txt","rb");
    if(fp == NULL){
        printf("File not found");
        exit(1);
    }
    while(fread(&b1,sizeof(b1),1,fp)==1){
        printf("%d %s %f",b1.bookid,b1.title,b1.price);
    }
    fclose(fp);
    getch();
}
