//Program for binary search in a sorted array.......
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[8]={6,10,15,20,23,29,30,31};
    int l=0,u,N,mid,flag,item=32;
    printf("%d",N);
    u=N-1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(item==A[mid])
        {
            flag=1;
            break;
        }
        else if(item>A[mid])
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    if(flag==1)
        printf("Search Found");
    else
        printf("Search not Found");
    getch();
}
