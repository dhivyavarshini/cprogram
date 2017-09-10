#include<stdio.h>
#include<conio.h>
void main()
{int num;clrscr();
printf("enter the number");
scanf("%d",&num);
if(num!=0)
{
if(num>0)
{printf("number is positive");
}
else
{printf("number is negative");
}
else
{printf("number is zero");
}
getch();
}
