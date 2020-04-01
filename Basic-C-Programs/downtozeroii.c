#include<stdio.h>
#include<conio.h>
void main()
{
    int q;
    scanf("%d",q);

    int a[q],i,count;

    for(i=0;i<q;i++)
        scanf("%d",a[i]);

    count=0;
    for(i=0;i<q;i++)
    {
        if(a[i]!=0){
            a[i]--;
            count++;
        }
        else
            count=0;
    }
    printf("\n%d:",count);
getch();
}
