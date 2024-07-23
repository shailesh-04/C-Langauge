#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,ans;
	clrscr();

	printf("Enter Number A :-");
	scanf("%f",&a);

	printf("Enter Number B :-");
	scanf("%f",&b);

	if(b==0)
	{
		printf("Erro is Zero: Enter Any Number");
	}
	else
	{
		ans=a/b;
		printf("ANS :- %f",ans);
	}
 getch();
}