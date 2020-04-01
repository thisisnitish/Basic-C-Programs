#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
//void lovemystery();
int createpalindrom(char s1);
void main()
{
    char str[100000];
    int n;
    printf("\nEnter the number of queries: ");
    scanf("%d",&n);

    int i;
    while(n)
    {
        gets(str);
        printf("%d",createpalindrom(str));
        n--;
    }
getch();
}

int createpalindrom(char str)
{
    int size,count;
    size=strlen(str);
    int i=size/2-1;
    int j;
    if(size%2==0)
        j=size/2;
    else
        j=i+1;

    for(;i>=0&&j<size;i--,j++)
        count+=abs(str[j]-str[i]);
    return(count);
}

/*int isstringpalindrom(char s1)
{
    char s2[100000];
    int cmp;
    strcpy(s2,s1);
    strrev(s2);

    cmp=strcmp(s1,s2);
    if(cmp==0)
        return(1);
    else
        return(0);
}

void lovemystery()
{
    int count=0;
    if(isstringpalindrom(s1))
        printf("\n%d",count);
    else
    {

    }

}*/
