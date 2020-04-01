#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char c;
    for(i=1;i<=7;i++)
    {
        c='A';
        for(j=1;j<=13;j++)
        {
            if(j<=(8-i) || j>=(i+6))
                {
                printf("%c",c);
                j<7?c++:c--;
                }
            else{
                printf(" ");
                if(j==7)
                    c--;
                }
        }
        printf("\n");
    }
    getch();
}
