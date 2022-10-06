																													/*
-----------------------------------------------------------------------------
								 POSITIVE AND NAGETIVE NUMBER
_______________________________________________________________________________       */

#include<stdio.h>
#include<conio.h>
void main()
{

	int num;
	clrscr();
	printf("\n\t\t\t \1 \2 \3 POSITIVE AND NAGETIVE NUMBER \3 \2 \1");   //TITAL
	printf("\n\nEnter A Number \2 :-");
	scanf("%d",&num);

	if(num>0) //condition//
	{
		printf("\nThis Numbetr Is Positive = %d",num);
	}
	else
	{
		printf("\nThis Number Is Nagetive = %d ",num);
	}
	getch();
}