#include<stdio.h>
#include<conio.h>
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i,j,temp;

    for(i=0;i<size;i++)
        {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",a+i);
        }

        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size-i-1;j++)
            {
                if(*(a+i)>*(a+i+j+1))
                {
                    temp=*(a+i);
                    *(a+i)=*(a+i+j+1);
                    *(a+i+j+1)=temp;
                }
            }
        }

        printf("Sorted Array is:");

        for(i=0;i<size;i++)
            printf("%d ",*(a+i));

        getch();
}
