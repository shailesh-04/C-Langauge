#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum;
	clrscr();
	sum=0;
	printf("\n Enter seris Number :-");
	scanf("%d",&n);
	while(n>=1)
	{
		sum=sum+n;
		n++;

	}
	printf("\n %d ",sum);


	getch();
}