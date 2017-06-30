#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter the intervals");
scanf("%d %d",&a,&b);
while(a<=b)
{
if(a%2==0)
{
printf("%d",a);
}
a++;
}
getch();
}
