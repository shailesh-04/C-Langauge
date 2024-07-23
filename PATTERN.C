#include<stdio.h>
#include<conio.h>
void main()
{
	char r,i,j;
	clrscr();
	printf("\n Enter A Number :-");
	scanf("%d",&r);

	for(i='a'; i!=r; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %c",i);
		}
		printf("\n");
	}

	getch();
}