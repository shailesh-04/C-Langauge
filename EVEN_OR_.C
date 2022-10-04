																																	/*
--------------------------------------------------------------------------------
			  FIND EVEN OR ODD NUMBER
--------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int no;

	clrscr();
	printf("\n\t\t \2 \3 \4 FIDN EVEN OR ODD NUMBER \4 \3 \2");
	printf("\n\nEnter Any Number NO. :- ");
	scanf("%d",&no);

	if(no%2==0)
	{
		printf("\nThis Number Is EVEN = %d",no);
	}
	else
	{
		printf("\nThis Number Is ODD = %d");
	}
getch();

}