/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,Row;
	int assci;
 clrscr();
	printf("How Many Rows:- ");
	scanf("%c",&Row);
  assci=Row;
	if(assci<97)
	{
		for(i='A'; i<=Row; i++)
			{
				for(j='A'; j<=i; j++)
					{
						printf("%c ",j);
					}
				printf("\n");
			}
	}
	else
  {
		for(i='a'; i<=Row; i++)
			{
				for(j='a'; j<=i; j++)
					{
						printf("%c ",j);
					}
				printf("\n");
			}
	}
 getch();
}