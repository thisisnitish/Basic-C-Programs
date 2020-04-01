//Delete data from file....

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(FILE *);
void main()
{
    FILE *fp1,*fp2;
    int del_line_no;
    int curr_line_no = 0;
    char str[100];

    fp1 = fopen("f3.txt","r");
    printf("Before modification contents are:\n");
    display(fp1);

    rewind(fp1);
    printf("\nEnter the line number to be deleted: ");
    scanf("%d",&del_line_no);

    fp2 = fopen("replica.txt","w");
    while(fgets(str,10,fp1)!=NULL)
    {
        curr_line_no++;
        if(curr_line_no != del_line_no)
        {
            fputs(str,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("f3.txt");
    rename("replica.txt","f3.txt");
    fp1 = fopen("f3.txt","r");
    printf("\nAfter modifications:\n");
    display(fp1);
    fclose(fp1);
    getch();
}

void display(FILE *fp)
{
    char ch;
    ch = fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch = getc(fp);
    }
}
