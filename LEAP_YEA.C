																													  /*
-----------------|||---------------------------------|||---------------------
								LEAP YEAR OR NOT LEAP YEAR
-----------------|||---------------------------------|||----------------------                          */
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\n\t\t \1 \2 \3 LEAP YEAR OR NOT LEAP YEAR \3 \2 \1");
	printf("\n\nEnter Any Year :-");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf("\nThis Leap Year = %d",year);
	}
	else
	{
		printf("\nThis Not Leap Year = %d",year);
	}
	getch();
}