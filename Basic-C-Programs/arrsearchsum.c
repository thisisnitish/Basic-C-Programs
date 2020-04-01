#include<stdio.h>
#include<conio.h>
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],item,i,j;

    for(i=0;i<size;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the number: ");
    scanf("%d",&item);

    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(a[i]+a[j]==item)
            {
                printf("Number is combination of %d and %d\n",a[i],a[j]);
                break;
            }
        }
    }
getch();
}
