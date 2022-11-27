#include<conio.h>
#include<stdio.h>
void main()
{
	int num,r=0,sum=0;
	clrscr();
	printf("\nEnter Any Number :-");
	scanf("%d",&num);
	while(num>0)
	{  r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("\n\n Addition = %d",sum);
	getch();
}