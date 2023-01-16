/*
	Prime number is a number that is greater than 1 and divided by 1 or itself. 
	In other words, prime numbers can't be divided by other numbers than 
	itself or 1. For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Div=0,i,Flag=0;
 clrscr();
	printf("Enter a Number:- ");
	scanf("%d",&Num);

	Div=Num/2;

	for(i=2; i<=Div; i++)
		{
			if(Num%i==0)
				{
					printf("\n\nNumber Is Not a Prime Number");
					Flag=1;
					break;
				}
		}

	if(Flag==0)
		{
			printf("\n\nNumber Is a Prime Number");
		}
 getch();
}