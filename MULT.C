#include<stdio.h>
#include<conio.h>
void main()
{
	int range=1,no=1,sum=0,mult=0;
	clrscr();

	printf("\nEnter a Number Range:-\n");
	scanf("%d",&range);
	 no=range;
	while(no>=1)
	{

		if(no%2==0)
		{
			sum=sum+no;
		}
		else
		{
			mult=mult*no;
		}
		no--;
	}
	printf(" \n sum=%d",sum);
	printf(" \n mult=%d",mult);

getch();
}