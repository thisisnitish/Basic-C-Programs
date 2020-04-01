#include<stdio.h>
#include<conio.h>
void display(int a[],int size);
void rotate_left(int a[],int size, int n);
void main()
{
    int size,n;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int a[size],i;
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter the number for elements you want to reverse: ");
    scanf("%d",&n);

    rotate_left(a,size,n);
    display(a,size);
getch();
}

void display(int a[], int size)
{
    int i;
    printf("\n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}

void rotate_left(int arr[],int size,int n)
{
    int i,temp;
    temp=arr[0];
    while(n)
    {
        for(i=0;i<=size-2;i++)
            arr[i]=arr[i+1];
        arr[size-1]=temp;
        n--;
    }
}
