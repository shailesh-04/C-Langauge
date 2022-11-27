#include<conio.h>
#include<stdio.h>
void main()
{
	int num,r=0,sum=0;
	clrscr();
	printf("\nID:-github.com/shailesh-04 \t\t <<SUM OF ALL DIGIT NUMBER>> \n\t\t\t\t\t----------------------------");
	printf("\nEnter Any Number :-");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("\n\n Sum Of All Digit Number = %d",sum);
	getch();
}