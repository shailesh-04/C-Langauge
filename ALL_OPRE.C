#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char ch;
	float ans;
	clrscr();
	printf("\n\t\t\1 \2 All OPRETOR \2 \1");

	printf("\n\n Enter Any Value A :-");
	scanf("%d",&a);
	printf("\n Enter Any Value of B :-");
	scanf("%d",&b);

	printf("\n+ : ADDITION");
	printf("\n- : SUBTRACTION");
	printf("\n* : MULTIPLICAT.loION");
	printf("\n/ : DIVITION");
	printf("\n% : REMAINDER");
	printf("\n Enter Yor Choise:-\n");
	ch=getch();

	switch(ch)
	{
		case'+':ans=a+b;
			printf("\n %d + %d= %f",a,b,ans);  break;
		case'-':ans=a-b;
			printf("\n %d - %d= %f",a,b,ans);  break;
		case'*':ans=a*b;
			printf("\n %d * %d= %f",a,b,ans);  break;
		case'/':ans=a/b;
			printf("\n %d / %d= %f",a,b,ans);  break;
		case'%':ans=a%b;
			printf("\n %d / %d= %f",a,b,ans);  break;

		default:printf("\n\ninvaled choise");
	}
	getch();}
