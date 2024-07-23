#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,number=0;
	clrscr();
		printf("enter number:- ");
		scanf("%f",&number);
	for(i=1;i<=10;i++)
	{
	 printf("\n %d",(number*i));
	}
	getch();
}