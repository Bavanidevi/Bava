#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,t=0,t1=1,nextterm=0;
printf("Enter the number\n");
scanf("%d",&n);
printf("Fibonacci series\n %d %d",t,t1);
while(nextterm<=n)
{
printf("%d",nextterm);
t=t1;
t1=nextterm;
nextterm=t+t1;
}
getch();
}
