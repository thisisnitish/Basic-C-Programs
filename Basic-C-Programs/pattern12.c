//Program to print star pattern 10...
//By- Nitish Kumar     Date- 24/nov/2019...
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows,k=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{

		for(j=1;j<=(2*rows-1);j++)
		{
			if(j>=i && j<=2*rows-i)
			  printf("*");
			else
			  printf(" ");
		}
		printf("\n");
	}
	getch();
}
