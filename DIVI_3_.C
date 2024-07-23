


#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n\t\t \1\2 DIVIGIBLE BY 3 \2\1");    //titel
	printf("\n\nEnter Any Number :-");
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("\n This Number Is Divigible By 3 \2\2");
	}
	else
	{
		printf("\n This Number Is Not Divigible By 3 \1\1");
	}
	getch();
}