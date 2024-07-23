#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1; i<=12; i++)
	{
			for(j=0; j<=i; j++)
			 {
				printf("*");
			 }
		printf("\n");
	}



  getch();
 }