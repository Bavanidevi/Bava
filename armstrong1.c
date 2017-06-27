#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,oi,r,ri;
printf("Enter the Number");
scanf("%d",&n);
oi=n;
while(oi!=0)
{
r=n%10;
ri=ri*10+r*r*r;
oi/=10;
}
if(oi==ri)
{
printf("The number %d is Armstrong",oi);
else
printf("The number %d is not a Armstrong",oi);
return(0);
}
getch();
}
