#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p,n,c=0;
	clrscr();
	printf("Enter any no:-");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("\n this prime no=");
	}
	else
	{
		printf("this no is not prime==");
	}
	getch();
}