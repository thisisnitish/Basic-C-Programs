//Tower of hanoi...

#include<stdio.h>
#include<conio.h>
void tower_of_hanoi(int, char, char, char);
int main()
{
    int n;
    //n is the number of discs....
    printf("Enter the number of discs: ");
    scanf("%d",&n);

    //Here A is source, C is destinaion and B is auxiliary....
    tower_of_hanoi(n,'A','C','B');
return(0);
}

void tower_of_hanoi(int n,char source, char dest, char aux)
{
    if(n==1)
    {
       printf("\nMove disc %d from %c to %c",n,source,dest);
       return;
    }
    tower_of_hanoi(n-1,source,aux,dest);
    printf("\nMove disc %d from %c to %c",n,source,dest);
    tower_of_hanoi(n-1,aux,dest,source);
}
