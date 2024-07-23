#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n\t\t \1\2 DIVIGIBLE BY 3 OR NOT DIVISIBLE 9 \2\1");

	printf("\n\n Enter Any number :-");
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("\n This Number Is Div By 3 ");
	}
	else
	{
		printf("\n This Number Is Not Div By 3 ");
	}

	if(num%9!=0)
	{
		printf(" \nThis Number Is Not Div By 9 ");
	}
		getch();
}