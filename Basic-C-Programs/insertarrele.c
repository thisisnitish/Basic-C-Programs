#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],b[size],i,n,no;

    for(i=0;i<size;i++)
    {
        printf("\nEnter array element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    //copying array
    for(i=0;i<size;i++)
        b[i]=a[i];

    printf("\nAt which index you want to insert the value: ");
    scanf("%d",&n);

    printf("\nEnter the number you want to insert: ");
    scanf("%d",&no);

    b[n]=no;

    for(i=0;i<size+1;i++)
    {
        b[n+i+1]=a[n+i];
    }

    printf("\nArray after inserting an element: ");

    for(i=0;i<size+1;i++)
        printf("%d ",b[i]);

return(0);
}
