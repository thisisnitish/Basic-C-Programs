#include<stdio.h>
#include<conio.h>
struct address
{
 char city[20];
 char phone[20];
 int pin;
};
struct emp
{
 char name[25];
 struct address a;
};
int main()
{
  struct emp e;
  //clrscr();
  printf("Enter the name, city, phone no and pin of employee:" );
  scanf("%s%s%s%d",&e.name,&e.a.city,&e.a.phone,&e.a.pin);

  printf("\nInformation about employee is:");
  printf("\n%s %s",e.name,e.a.phone);
  printf("\n%s %d",e.a.city,e.a.pin);

return(0);
//getch();
}
