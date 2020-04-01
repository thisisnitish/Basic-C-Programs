#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    char c;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        c='A';
        for(j=1;j<=2*rows-1;j++)
        {
            if(j<=rows+1-i || j>=i+rows-1)
                printf("%c",c);
            else
                printf(" ");
            c++;
        }
        printf("\n");
    }
getch();
}
