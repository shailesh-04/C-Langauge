#include<stdio.h>
#include<conio.h>
void main()
{
	long i,N,Fact=1;

 clrscr();
	printf("Enter Number:- ");
	scanf("%ld",&N);

	if(N>=20)
		{
			printf("\nError:- \n\tPlease Enter Number Less Than 19");
		}
	else
		{
			for(i=1; i<=N; i++)
				{
					Fact*=i;
				}
			printf("\n\tFactorial Is = %ld",Fact);
		}
 getch();
}