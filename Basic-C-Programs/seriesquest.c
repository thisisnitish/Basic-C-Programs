#include<stdio.h>
#include<conio.h>
void main()
{
    float no,fact,x;
    float sum;
    printf("Enter the no: ");
    scanf("%f",&no);
    sum=0;
    while(no)
    {
        x=no;
        fact=1;
        while(x)
        {
            fact=fact*x;
            x--;
        }
        sum=sum+(no/fact);
        no--;
    }
    printf("%.2f",sum);
    getch();

}
121
