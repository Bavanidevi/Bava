#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,x,sum,f;
printf("Enter the Number");
scanf("%d",&n);
printf("Factorial of %d is %d",n,rec(n));
getch();
}
int rec(x)
{
if(x==1)
  return(1);
  else
  f=x*rec(x-1);
 return(f);
}
