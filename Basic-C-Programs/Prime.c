//Program to print prime number always from 2
//Name-Nitish Kumar             Date-17/nov/2018
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,l,i;
    printf("Enter the value till you want the prime number: ");
    scanf("%d",&N);
    for(l=2;l<=N-1;l++)
    {
        for(i=2;i<l;i++)
        {
            if(l%i==0)
                break;
                }
            if(i==l)
                printf("%d ",l);

        }
    return 0;
}
