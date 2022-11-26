#include<stdio.h>
#include<conio.h>
void main()
{
	int num,c,r,s=0;
	clrscr();

	printf("\n\t\t \1 \2 CHEACK TO PALIDROME NUMBER \2 \1"); // titel
	printf("\n\nEnter Any Number For Check Pandrome Number  :-");
	scanf("%d",&num);
	c=num;
	while(num>0)
	{
		r=num%10;
		s=r+(s*10);
		num=num/10;
	}
	if(c==s)
	{
		printf("\n\nThis Number Is Pandrome Number :-%d",num);
	}
	else
	{
		printf("\nThis Number Is Not Pandrom Number :-%d",num);

	}



	getch();
}