																												 /*
-------------------------------------------------------------------------
				A  PRESON IS ELIGIBLE FOR VOT OR NOT VOT
----------------------------------------------------------------------------            */

#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n\t\t \2 \2 \3 A PRESON IS ELIGIBLE DOR VOT OR NOT VOT \3 \2 \2");

	printf("\n\nEnter Your age Number :-");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("\nEligible For Vote");
	}
	else
	{
		printf("\nNot Eligible For Vote");
	}


	getch();
}