#include<stdio.h>
#include<conio.h>
void main()
{
	int Choise;
	clrscr();
	printf("----------SELECT COLOR--------");
	printf("\nPress R For Red ");
	printf("\nPress G For Green");
	printf("\nPres B For Blue");
	printf("\n\nEnter Choise Color:- ");

	scanf("%s",&Choise);
	if(Choise== 'R')
	{
		printf("\nThis Red Color");
	}

	if(Choise== 'B')
	{
		printf("\nThis Blue Color");
	}

	if(Choise=='G')
	{
		printf("\nThis Green Color");
	}
 getch();
}