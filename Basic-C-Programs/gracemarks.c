//Program to print the gracemarks of the students....
//By-Nitish Kumar              Date-11/nov/2018
#include<stdio.h>
#include<conio.h>
void main()
{
    int m1,m2,m3,failsub,gracemarks,Class;
    printf("\nStudent will fail if he will get less than 33 marks:");
    printf("\nMarks of the student will be evaluated out of 100:");
    printf("\nEnter the marks of the first subject: ");
    scanf("%d",&m1);
    printf("\nEnter the marks of the second subject: ");
    scanf("%d",&m2);
    printf("\nEnter the marks of the third subject: ");
    scanf("%d",&m3);
    printf("\nEnter the class of the student: ");
    scanf("%d",&Class);

    if(m1<33)
        failsub=1;
    if(m2<33)
        failsub=1;
    if(m3<33)
        failsub=1;

    if(m1&&m2<33)
        failsub=2;
    if(m2&&m3<33)
        failsub=2;
    if(m1&&m3<33)
        failsub=2;

    if(m1&&m2&&m3<33)
        failsub=3;
    else
        failsub>3;

    switch(Class)
    {

    case 1:
        //printf("\nEnter the no. of subject he failed: ");
        //scanf("%d",&failsub);
        if(failsub>3)
        {
            printf("\nStudent doesn't get any grace marks: So the Marks will be:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        if(failsub<=3)
        {
            gracemarks=5;
            printf("\nGraceMarks for each subject will be %d",gracemarks);
            m1=m1+5;
            m2=m2+5;
            m3=m3+5;
            printf("\nFinal marks of the student after getting grace marks is:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        break;
    case 2:
         //printf("\nEnter the no. of subject he failed: ");
        //scanf("%d",&failsub);
        if(failsub>2)
        {
            printf("\nStudent doesn't get any grace marks: So the Marks will be:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        if(failsub<=2)
        {
            gracemarks=4;
            printf("\nGraceMarks for each subject will be %d",gracemarks);
            m1=m1+4;
            m2=m2+4;
            m3=m3+4;
            printf("\nFinal marks of the student after getting grace marks is:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        break;
    case 3:
         //printf("\nEnter the no. of subject he failed: ");
        //scanf("%d",&failsub);
        if(failsub>1)
        {
            printf("\nStudent doesn't get any grace marks: So the Marks will be:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        if(failsub==1)
        {
            gracemarks=5;
            printf("\nGraceMarks for each subject will be %d",gracemarks);
            m1=m1+5;
            m2=m2+5;
            m3=m3+5;
            printf("\nFinal marks of the student after getting grace marks is:");
            printf("\n%d",m1);
            printf("\n%d",m2);
            printf("\n%d",m3);
        }
        break;
    }
    getch();
}
