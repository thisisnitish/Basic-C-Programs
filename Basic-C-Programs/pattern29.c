#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    char k=64;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=k+2*(i-1)+1;
        for(j=1;j<=rows;j++)
        {
            if(j>=rows+1-i)
            {
                printf("%c",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
getch();
}
