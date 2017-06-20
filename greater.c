#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter the number");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("the number %d is greater",a);
}
elseif(b>c)
{
printf("The number %d is greater",b);
}
else
{
printf("The number %d is greater",c);
}
getch();
}
