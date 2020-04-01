#include<stdio.h>
#include<conio.h>
void main()
{
    float a,count=0,avg=0,sum=0,tot=0;

    while(1)
    {
        printf("Enter the number:\n");
        scanf("%f",&a);
        count++;
        if(a<0)
            break;

        sum=sum+a;

    }
    avg=sum/(count-1);
    tot=sum;
    printf("%f ",avg);
    printf("%f ",tot);
    getch();
}
