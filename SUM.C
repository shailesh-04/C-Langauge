#include<stdio.h>
#include<conio.h>
void main()
{
	int range=10,sum=0,no=1;
	clrscr();

	printf("Enter a NumberRange");
	scanf("%d",&range);
	no=range;
	while(no<=range)
	{	sum=sum+no;
	printf("%d",sum);

	}
	range--;
 getch();

}

