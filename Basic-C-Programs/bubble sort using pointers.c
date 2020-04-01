#include <stdio.h>
void main()
{
  int a[5],i,j,temp;
  int *ptr;ptr=&a[0];
   printf("enter a number into the array");
  for(int i=0;i<5;i++)
  {
     scanf("%d",ptr+i);
  }

  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(*(ptr+i)>*(ptr+j))
      {
        temp=*(ptr+i);*(ptr+i)=*(ptr+j);*(ptr+j)=temp;
      }
    }
  }
  for(i=0;i<5;i++)
  {

      printf("%d",*(ptr+i));
  }
}

