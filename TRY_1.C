#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter Any Numbr");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i==j)
			{
				printf(" *");
			}
			else if(i<j)
			{
				printf(", ");
			}
			else if(j<i)
			{
				printf(".");
			}
			else
			{
				printf("2");
			}
		}
		printf("\n");
	}
	getch();
}