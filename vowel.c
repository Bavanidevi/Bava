#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a1;
printf("Enter the Number");
a1=getchar();
if(a1=='a'||a=='e'||a=='i'||a=='o'||a=='u')
{
printf("Entered character %c is vowel",a1);
}
else
{
printf("Entered character %c is consonant",a1);
}
getch();
}
