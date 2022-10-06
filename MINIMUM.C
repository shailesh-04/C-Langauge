																																 /*
------------------------===========================-------------------------------
							 FIND MINIMUM NUMBER IN THREE NO.
---------------------===============================-------------------------------                                                   */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\t\t \3\2 FIND MINIMUM NO. IN THREE NUMBER \2\3 ");

	printf("\n\n Enter Any Number A :-");
	scanf("%d",&a);

	printf("\nEnter Any Number B :-");
	scanf("%d",&b);

	printf("\nEnter Any Numbr C :-");
	scanf("%d",&c);

	if(a<c ||a<b)
	{
		printf("\nThis number Is Minimum A =%d ",a);
	}
	else if(b<a|| b<c)
	{
		printf("\nThis Number Is Minimum B =%d ",b);
	}
	else if(c<a || c<b)
	{
		printf("\nThis Number Is Minimum C =%d ",c);
	}
	else
	{
		printf("\nThis Number Is Minimun Same %d =%d= %d",a,b,c);
	}

	getch();
}
