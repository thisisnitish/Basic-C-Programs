#include<stdio.h>
#include<conio.h>
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size], i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<size;k++)
                {
                    a[k]=a[k+1];
                }
                size--;
                j--;
            }
        }
    }

printf("Array after deleting the duplicate elements are: ");
for(i=0;i<size;i++)
{
    printf("%d",a[i]);
}
getch();
}
