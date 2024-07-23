#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\t\t DAY NAME");

	printf("\n 1 OR A:MONDAY ");
	printf("\n 2 OR B:TEUSDAY");
	printf("\n 3 OR C:WENDNESDAY");
	printf("\n 4 OR D:THURSDAY");
	printf("\n 5 OR E:FRIDAY");
	printf("\n 6 OR F:SATURDAY");
	printf("\n 7 OR G:SUNDAY ");

	printf("\n\n Enter Your Choise__");
	ch=getch();
	switch(ch)
	{
		case 'a':
		case '1': printf("\n\n MODDAY");getch();  break;
		case 'b':
		case '2': printf("\n\n TUESAY");getch();   break;
		case 'c':
		case '3': printf("\n\n WENDNESDAY");getch(); break;
		case 'd':
		case '4': printf("\n\n THURSDAY");getch(); break;
		case 'e':
		case '5': printf("\n\n FRIDAY");getch();   break;
		case 'f':
		case '6': printf("\n\n SATURDAYDAY");getch(); break;
		case 'g':
		case '7': printf("\n\n SUNDAY");getch();   break;

		default: printf("\n\n\n invalid input");

	}

	getch();
}