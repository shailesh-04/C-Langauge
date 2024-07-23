/*
	*
	* *
	* * *
	* * * *
	* * * * *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,Row;
	Label:
 clrscr();
	printf("Enter Rows:- ");
	scanf("%d",&Row);
	if(Row>=25)
		{
			printf("\n\n\t\tWe Can Print only  24 Rows");
			getch();
			goto Label;
		}
	clrscr();
	for(i=0; i<=Row; i++)
		{
			for(j=0; j<i; j++)
				{
					printf("* ");
				}
			printf("\n");
		}
 getch();
}