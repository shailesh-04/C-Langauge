/*
	* * * * *
	* * * *
	* * *
	* *
	*
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
			printf("\n\n\t\tWe Can Print Only 24 Rows");
			getch();
			goto Label;
		}
	clrscr();
	for(i=Row; i>0; i--)
		{
			for(j=0; j<i; j++)
				{
					printf("* ");
				}
			printf("\n");
		}
 getch();
}