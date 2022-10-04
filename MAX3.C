																																 /*
-----------------------------------------------------------------------
						<<  FIND MAX NUMBER THREE VARIABLE	>>
------------------------------------------------------------------------
																																				*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("\t\t << Find Max Number Using three Variable>>\n");

	printf("\nEnter a numbrr A:- ");
	scanf("%d",&a);

	printf("\nEnter a Number B:- ");
	scanf("%d",&b);

	printf("\nEnter a Number C:- ");
	scanf("%d",&c);

	if(a==b&& a==c&& b==a&& b==c&& c==a&& c==b)
	{
		printf("\n  Enter Number Is Same A=B=C = %d %d %d ",a,b,c);
	}
	else if(a>b&&a>c)
	{
		printf("\n THis Number is Max A =%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("\n This Number is Max B =%d",b);
	}
	else
	{
		printf("\n This Number Is Max C =%d",c);
	}





 getch();
}