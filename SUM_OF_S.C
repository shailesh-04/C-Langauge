#include<stdio.h>
#include<conio.h>
void main()
{
	int range=1,no=1,sum=0;
	clrscr();

	printf("\nEnter a Number Range:-\n");
	scanf("%d",&range);
	 no=range;
	while(no>=1)
	{
		sum=sum+no;
		 no--;

	}
	printf(" \n sum=%d",sum);

getch();
}