#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\t\t\t traffic jam or not trafic jam");
	printf("\n Enter Your Choise:-");
	scanf("%c",&ch);
	switch(ch)
	{
		case'r':
		case'R':printf("\n traffics jam");
		break;
		case'g':
		case'G':printf("Go Ahald");
		break;
		default:printf("\n not permutsat");
	}
	getch();
}
