#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i,j;


    for(i=0;i<size;i++)
    {
        printf("Enter the array elements %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nGiven array is: ");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);

    for(i=0;i<size;i++)
    {
        if(a[i]%5==0)
        {
            a[i]=a[i]/5;
        }
        else
        {
                a[i]=a[i]*2;
        }
    }
    printf("\nResultant array is: ");
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    }

return 0;
}
