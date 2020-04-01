#include<stdio.h>
int main()
{
    char s[200];
    int i,count1,count2;

    printf("Enter the paragraph: ");
    gets(s);

    count1=0;
    count2=0;
    for(i=0;i<200;i++)
    {
        if(s[i]>=65 && s[i]<=90)
            count1=count1+1;

        if(s[i]>=97 && s[i]<=122)
            count2=count2+1;
    }

    printf("%d %d",count1,count2);

return(0);
}
