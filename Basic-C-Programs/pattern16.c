//Program to print the star pattern.....
//By- Nitish Kumar       Date-17/dec/2018
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j==i || j==rows+1-i)
                {
                 if(i==rows+1-j)
                    printf("/");
                else
                    printf("\\");
                }
            else
                printf("*");
        }
        printf("\n");
    }
}
