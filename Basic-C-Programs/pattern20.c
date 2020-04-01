#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    char k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k='A';
        for(j=1;j<=2*rows;j++)
        {
            if(j>=rows+1-i && j<=i+rows)
            {
                if(j==(2*rows+2)/2)
                    k='1';
                printf("%c",k);
                 k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
