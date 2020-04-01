#include<stdio.h>
#include<conio.h>
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i,temp;

    for(i=0;i<size;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
        printf("%d ",a[i]);

    for(i=0;i<size/2;i++)
    {
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    printf("\nReversed Array is: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
getch();
}
