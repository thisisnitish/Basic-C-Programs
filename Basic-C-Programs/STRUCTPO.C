#include<stdio.h>
#include<conio.h>
struct book
{
 char name[20];
 char author[20];
 int price;
};
int main()
{
  struct book b;
  struct book *ptr;
  printf("Enter the name, author name and price of book: ");
  scanf("%s%s%d",&b.name,&b.author,&b.price);

  ptr=&b;
  printf("\n%s %s %d",b.name,b.author,b.price);
  printf("\n%s %s %d",ptr->name,ptr->author,ptr->price);

return(0);
}

