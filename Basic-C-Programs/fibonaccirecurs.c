//Program to print fibonacci series by recursion....
//Fibonacci Series   1 1 2 3 5 8.......

#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
    int N,i;

    printf("Enter the number of terms you want: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
        printf("%d ",fib(i));

    getch();
}

int fib(int n)
{
    if(n==1 || n==2)
        return(1);
    else
        return(fib(n-1)+fib(n-2));
}
