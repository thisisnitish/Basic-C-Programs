//Program to print pattern...

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int n,i,j,k;
    scanf("%d",&n);

    //i for rows and j for columns
    for(i=1;i<=2*n-1;i++)
    {
        k=n;  //every time k will be initialized to the value of n
        if(i<=n)   //for upper half part
        {
            for(j=1;j<=2*n-1;j++){
                printf("%d ",k);
            if(i>j)         //for upper left side part...when numbers are decreasing
                k--;
            if((i+j)>=2*n)   //for upper right side part...when numbers are increasing
                k++;
            }
        }
    if(i>n)   //for lower half part
    {
        for(j=1;j<=2*n-1;j++)
        {
            printf("%d ",k);
            if((i+j)<2*n)     //for lower left side part...when numbers are decreasing
                k--;
            if(j>=i)      //for lower right side part...when numbers are increasing
                k++;
        }
    }
    printf("\n");
}
getch();
}
