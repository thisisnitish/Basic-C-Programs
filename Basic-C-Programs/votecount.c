//vote counting problem....

#include<stdio.h>
#include<conio.h>
void main()
{
	int size,people;
	printf("Enter the number of candidates: ");
	scanf("%d",&size);

	printf("Enter the number of people who wants to vote: ");
	scanf("%d",&people);

	int cand[size],votes[people],i,j,count;

	for(i=0;i<size;i++)
	{
		printf("\nAlott the number for candidate %d: ",i+1);
		scanf("%d",&cand[i]);
	}

	for(i=0;i<people;i++)
	{
		printf("\nEnter candidate's alotted number to give your vote: ");
		scanf("%d",&votes[i]);
	}

	for(i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<people;j++)
		{
			if(cand[i]==votes[j])
			{
				count++;
			}
		}
		printf("\nvotes for candidate %d are %d ",cand[i],count);
	}
getch();
}
