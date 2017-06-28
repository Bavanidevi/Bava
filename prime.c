#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,p,count=0;
printf("Enter the Number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count=1;
break;
}
}
if(count==0)
{
printf("%d is a prime number",n);
}
else
{
printf("%d is not a prime number",n)
}
getch();
}
