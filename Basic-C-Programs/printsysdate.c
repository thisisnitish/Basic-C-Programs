#include<windows.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d",stime.wDay,stime.wMonth,stime.wYear);
    //printf("\n%d: %d: %d",stime.wHour,stime.wMinute,stime.wSecond);
}
