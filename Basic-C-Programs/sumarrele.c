#include<stdio.h>
#include<conio.h>
void main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i,sum=0;

    for(i=0;i<size;i++)
    {
        printf("Enter the array element %d:",i+1);
        scanf("%d",&a[i]);
    }

    i=0;
    while(i<size)
    {
        sum=sum+a[i];
        i++;
    }

    printf("sum of the array elements are: %d",sum);
getch();
}
