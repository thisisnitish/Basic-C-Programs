//writing in a file using fwrite function
//fwrite accepts 4 arguments syntax: fwrite(void *Buffer, int size, int count, FILE *ptr);

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Book
{
    int bookid;
    char bookname[20];
    float price;
};

void main()
{
    struct Book b1;
    FILE *fp;
    fp = fopen("f2.txt","wb");

    printf("Enter book id: ");
    scanf("%d",&b1.bookid);
    printf("\nEnter book name: ");
    fflush(stdin);
    gets(b1.bookname);
    printf("\nEnter price for book: ");
    scanf("%f",&b1.price);

    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
}
