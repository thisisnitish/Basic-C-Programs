//Program for Linear Search...
//By-Nitish Kumar      Date-12/dec/2018
#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,key,flag;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int a[size];

    for(i=0;i<size;i++)
    {
        printf("Enter the element %d in the array: ",i+1);
        scanf("%d",a[i]);
    }

    printf("\nEnter the key element which you want to search: ");
    scanf("%d",&key);

    for(i=0;i<size;i++)
    {
        if(a[i]==key)
            flag=1;
    }

    if(flag==1)
        printf("Search Successful...Number Found...");
    else
        printf("Search Unsuccessful...Number Not Found...");

getch();
}
