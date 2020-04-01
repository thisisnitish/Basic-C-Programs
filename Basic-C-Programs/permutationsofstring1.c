//C code for permutation of the strings

#include <stdio.h>
#include<string.h>

int main()
{
	int n;
	printf("Enter the number of string: ");
	scanf("%d",&n);

	char s[n][9];
	printf("\nEnter the string: ");
	for(int i=0; i<n; i++)
		gets(s[i]);

	
}