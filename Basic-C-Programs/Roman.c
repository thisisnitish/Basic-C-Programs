#include<stdio.h>
#include<conio.h>
void roman(int);
void main()
{
    int y;
    printf("Enter the year:\n");
    scanf("%d",&y);
    roman(y);
    getch();
}

void roman(int year)
{
    int th,hun,tens,unit,i;

    th= year/1000;
    for(i=0;i<th;i++)
        printf("m");

    hun=year/100;
    hun=hun%10;

    switch(hun)
    {
    case 0:
        break;
    case 1:
        printf("c");
        break;
    case 2:
        printf("cc");
         break;
    case 3:
        printf("ccc");
         break;
    case 4:
        printf("cccc");
         break;
    case 5:
        printf("d");
         break;
    case 6:
        printf("dc");
         break;
    case 7:
        printf("dcc");
         break;
    case 8:
        printf("dccc");
         break;
    case 9:
        printf("dcccc");
         break;

    }

  tens=year%100;
  tens=tens/10;

  switch(tens)
  {
     case 0:
        break;
    case 1:
        printf("x");
        break;
    case 2:
        printf("xx");
         break;
    case 3:
        printf("xxx");
         break;
    case 4:
        printf("xxxx");
         break;
    case 5:
        printf("l");
         break;
    case 6:
        printf("lx");
         break;
    case 7:
        printf("lxx");
         break;
    case 8:
        printf("lxxx");
         break;
    case 9:
        printf("lxxxx");
         break;
  }

  unit=year%10;

  switch(unit)
  {
      case 0:
        break;
    case 1:
        printf("i");
        break;
    case 2:
        printf("ii");
         break;
    case 3:
        printf("iii");
         break;
    case 4:
        printf("iiii");
         break;
    case 5:
        printf("v");
         break;
    case 6:
        printf("vi");
         break;
    case 7:
        printf("vii");
         break;
    case 8:
        printf("viii");
         break;
    case 9:
        printf("viiii");
         break;
  }

}
