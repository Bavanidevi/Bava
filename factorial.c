#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int no,a,f1;
printf("Enter the Number");
scanf("%d",&no);
printf("Factorial of %d is %d",no,rec(no));
getch();
}
int rec(a)
{
if(a==1)
  return(1);
  else
  f1=a*rec(a-1);
 return(f1);
}
