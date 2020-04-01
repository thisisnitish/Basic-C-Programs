#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i,max;
    for(i=0;i<size;i++)
    {
        printf("Enter the array element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum element in the array is: %d",max);
    return(0);
}
