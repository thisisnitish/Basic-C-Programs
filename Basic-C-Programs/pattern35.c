#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,flag=1,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1,k=0;i<=2*rows-1;i++)
    {
        if(i<rows-k)
            printf(" ");
        else
        {
            if(flag)
                printf("*");
            else
                printf(" ");
            flag=1-flag;
        }

        if(i==rows+k)
        {
            k++;
            printf("\n");
            if(i==2*rows-1)
                break;
            i=0;
            flag=1;
        }
    }
getch();
}
