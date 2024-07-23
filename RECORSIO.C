#include<stdio.h>
#include<conio.h>

void Print_10_To_1(void);

int N=10;

void main()
{
 clrscr();
	 printf("\nNumbers From 10 To 1 Are:- ");

	 Print_10_To_1();
}

void Print_10_To_1(void)
{
	if(N!=0)
		{
			printf("\n%d\n",N);
			N--;

			Print_10_To_1();
		}

 getch();
 exit(0);
}