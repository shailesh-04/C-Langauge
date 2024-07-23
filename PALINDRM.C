#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Rem,Rev=0,Temp;
 clrscr();
	printf("Enter a Number:- ");
	scanf("%d",&Num);

	Temp=Num;

	while(Num!=0)
		{
			Rem=Num%10;
			Rev=(Rev*10)+Rem;
			Num=Num/10;
		}

	if(Temp==Rev)
		{
			printf("\n%d Is Palindrome Number",Temp);
		}
	else
		{
			printf("\n%d Is Not An Palindrome Number",Temp);
		}
 getch();
}