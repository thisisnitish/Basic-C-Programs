//C code to print strings in dictionary order

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,n,r,round;
    printf("Enter the number of string you want: ");
    scanf("%d",&n);

    char str[n][100],s[100];
    printf("\nEnter the strings:\n");
    for(i=0;i<n;i++)
        gets(str[i]);

    for(round=1; round<n; round++)
    {
        for(i=0; i<n-round; i++)
        {
            r = strcmp(str[i],str[i+1]);
            if(r > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], s);
            }
        }
    }

    for(i=0; i<n; i++)
        puts(str[i]);
    getch();
}
