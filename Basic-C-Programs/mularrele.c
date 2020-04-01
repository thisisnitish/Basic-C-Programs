//Program to multiply the numbers in the array.....
//By-Nitish Kumar      Date-22/dec/2018
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,p=1,size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=size-1;i++)
    {
        p=p*a[i];
    }
    printf("Multiplication of all the numbers in the array is: %d",p);
getch();
}
