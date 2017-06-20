#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("Enter the number\n");
scanf("%d",&n);
if(n>0)
{
   printf("The number is Positive");
}
else if(n<0)
{
  printf("The number is Negative");
}
else 
{
printf("The number is Zero");
}
getch();
}

