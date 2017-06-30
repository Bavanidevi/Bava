#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
void swap(int x,int y);
printf("Enter the number for a");
scanf("%d",&a);
printf("Enter the number for b");
scanf("%d",&b);
printf("The numbers before swap\n);
printf("a=%d b=%d",a,b);
swap(a,b);
getch();
}
void swap(int x,int y)
{
x=y;
y=temp;
temp=y;
printf("The numbers after swap\n);
printf("a=%d b=%d",x,y);
}
