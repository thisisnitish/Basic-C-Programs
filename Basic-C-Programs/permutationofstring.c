//C code for permutation of the string

#include<stdio.h>
#include<string.h>

void swap(char* , char*);
void permutation(char*, int, int);

int main()
{
	int n;
	printf("Enter the size of the string: ");
	scanf("%d",&n);
	fflush(stdin);
	char s[n];
	printf("Enter the string: ");
	gets(s);

	permutation(s,0,strlen(s)-1);
	return(0);
}

void permutation(char *s, int i, int n) 
{
	static int count;
	int j;

	if(i == n)
	{
		count++;
		printf("(%d) %s\n",count, s);
	}
	else
	{
		for(j=i; j<=n; j++)
		{
			swap((s+i), (s+j));
			permutation(s, i+1, n);
			swap((s+i), (s+j));
		}
	}
}

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y =  temp;
}