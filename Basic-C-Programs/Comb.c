//Pgm to print all type of combinations among numbers
//Vishal Sharma   Date:- 20/11/18

#include<stdio.h>
#include<conio.h>

int main()
{
	int j,no,i,temp,k=1,l,m;

	printf("Enter how many numbers you want to enter: ");
	scanf("%d",&no);

	int a[no],b[no];

	for(i=0;i<no;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
        b[i] = a[i]	;
	}


	for(j=1;j<=no-1;j++)
 	{


		for(i=1;i<no+1;i++)
	    {
            temp=a[0];

			for(m=0;m<no-1;m++)
	            a[m]=a[m+1];

            a[no-1]= temp;

			for(l=0;l<no;l++)
                printf("%d",a[l]);

			printf("\n");

		 }

		for(i=0;i<no;i++)
	        a[i]=b[i];

		temp = a[0];
		a[0] = a[k];
		a[k] = a[0];
		k++;

 	}

	getch();
    return (0);
}

