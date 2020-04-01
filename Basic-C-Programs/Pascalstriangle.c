//Program for Pascal's Triangle......
//By-Nitish Kumar      Date-15/dec/2018....

#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
void printpascal(int);

int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}

int combi(int n,int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}

void printpascal(int lines)
{
    int i,j,k,r;
    for(i=1;i<=lines;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=i+lines-1&&k)
            {
                printf("%2d",combi(i-1,r));
                 k=0;
                 r++;
            }
            else
            {
                printf("  ");
                k=1;
            }
        }
      printf("\n");
    }
}

void main()
{
    int lines;
    printf("Enter the number of lines you want to print the PASCAL'S TRIANGLE\n");
    scanf("%d",&lines);
    printpascal(lines);
}
