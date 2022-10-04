																																 /*
-----------------------------------------------------------------
			 FIND MINIMUM NUMBER IN TWO NO.
-----------------------------------------------------------------                                                   */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n\t\t \3\2 FIND MINIMUM NO. IN TOW NUMBER \2\3 ");

	printf("\n\n Enter Any Number A :-");
	scanf("%d",&a);

	printf("\nEnter Any Number B :-");
	scanf("%d",&b);

	if(a==b)
	{
		printf("\nThis number Is Same A=B %d=%d ",a,b);
	}
	else if(a<b)
	{
		printf("\nThis Number Is Minimum A =%d ",a);
	}
	else
	{
		printf("\nThis Number Is Minimum B =%d ");
	}



	getch();
}
