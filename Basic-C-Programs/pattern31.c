#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n,rows;
    char c;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=1;
        n=1;
        c='A';
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-i && j<=i+rows-1 && k)
            {
                if(i%2!=0)
                    printf("%d",n++);
                if(i%2==0)
                    printf("%c",c++);
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
getch();
}
