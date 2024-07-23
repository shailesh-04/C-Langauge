#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int i=0,binery,remider,decimal=0,power=0,temp=0;

	clrscr();
	printf("ID:- github.com/shailesh-04\n----------------------\1---COVERT BINERY TO DECIMAL---\1-----------------------");
	printf("\nEnter Binery Number:-");
	scanf("%ld",&binery);
	temp=binery;
	while(binery>0)
	{
		remider=binery%10;
		power=pow(2,i);
		decimal+=remider*power;
		binery=binery/10;
		i++;
	}
	 printf("\n============RESULT=============\n");
	 printf("\n%ld\n<----------\n::--DECIML => %ld",temp,decimal);
	 getch();
}