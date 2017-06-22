#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int year;
printf("Enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("The year %d is Leap year",year);
}
else
{
printf("The year %d is Not a Leap year",year);
}
getch();
}
