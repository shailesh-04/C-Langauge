																																							 /*
------------------------||----------------------------------------------------------------------------------------------
									Find Max Number Using Two  Variable
------------------------||-----------------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\t\t=========MAX NUMBER============");
	printf("\n\n Enter a Number A :-");
	scanf("%d",&a);
	printf("\n Enter a Number B :-");
	scanf("%d",&b);

	if(a==b)
	{
		printf("\n Number Is Same = A=%d & B=%d",a,b);
	}
	else if(b<a)
	{
		printf("\n Max Number is A = %d",a);
	}
	else
	{
		printf("\n Max Number Is B = %d",b);
	}
 getch();
}