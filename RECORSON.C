#include<stdio.h>
#include<conio.h>

void Print_1_To_10(void);

int N=1;

void main()
{
 clrscr();
	 printf("\nNumbers From 1 To 10 Are:- ");

	 Print_1_To_10();
}

void Print_1_To_10(void)
{
	if(N!=11)
		{
			printf("\n%d\n",N);
			N++;

			Print_1_To_10();
		}

 getch();
 exit(0);
}