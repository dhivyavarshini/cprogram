#include<stdio.h>
#include<conio.h>
void main()
{int num;clrscr();
printf("enter the number");
scanf("%d",&num);
if(num>0)
{printf("number is positive");
}
elseif(num<0)
{printf("number is negative");
}
else
{printf("number is zero");
}
getch();
}
