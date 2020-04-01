#include <stdio.h>
void leftRotatebyOne(int arr[], int n);

void leftRotate(int arr[], int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
        leftRotatebyOne(arr, n);
}

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


int main()
{
    int n, size;
    scanf("%d",&size);
    scanf("%d",&n);
    int arr[size],i;
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    leftRotate(arr,size,n);
    printArray(arr, size);
return 0;
}
