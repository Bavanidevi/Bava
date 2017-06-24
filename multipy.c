#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a;
printf("Enter the Table Number\n");
scanf("%d",&n);
printf("The multiplication table for %d is",n);
for(i=1;i<=10;i++)
{
a=i*n;
printf("\n %d * %d = %d",i,n,a);
}
getch();
}
