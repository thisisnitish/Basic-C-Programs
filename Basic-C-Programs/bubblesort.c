#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10],size,i,j,temp;    //swap
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<(size-1);i++)
    {   //swap=0;
        for(j=0;j<(size-i)-1;j++)
        {
            if(A[j]>A[j+1])        //for < this symbol we can use for ascending order....
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                //swap=1;
            }
        }
        //if(swap==0)
          //  break;
    }
    printf("Array after bubble sort: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
    getch();
}
