#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,r,ri;
printf("Enter the Number");
scanf("%d",&n);
while(n1=0)
{
r=n%10;
ri=ri*10+r;
n/=10;
}
printf("The reversed number %d is ",ri);
getch();
}
