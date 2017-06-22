#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1,sum;
printf("Enter the Number");
scanf("%d",&n);
while(i<=n)
{
sum=sum+n;
i++;
}
printf("The sum is %d",sum);
getch();
}
