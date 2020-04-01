//Program to print star pattern 10...
//By- Nitish Kumar     Date- 24/nov/2019...
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows,k=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		k=(rows-i);
		for(j=1;j<=rows;j++)
		{

			if(j<=rows-i)
			{
			  k--;
			  printf("%d",k);

			  }

			else
			{
				k++;
		    printf("%d",k);

			}


		}
		printf("\n");
	}
	getch();
}
