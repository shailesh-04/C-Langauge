#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int ans;
	char choise;
	clrscr();

	printf("\nenter tow number :-");
	scanf("%d%d",&a,&b);
	printf("\n press for '+' adition",('+'));
	printf("\n press for '-' subptection"('-'));
	printf("\n press for '*' multiplicatiob"('*'));
	printf("\n press for '/' divisn"'/');
	printf("\n press for '%' modyuler"('%'));

	printf("Enter your choise");
	scanf("%c",choise);
	if(choise=='+')
	{
		ans=a+b;
		printf("a+b=%f",ans);
	}
	else if(choise=='-')
	{
		ans=a-b;
		printf("an=%f",ans);
	}
	else if(choise=='*')
	{
		ans=a*b;
		printf("an=%f",ans);
	}
	else if(choise=='/')
	{
		ans=a/b;
		printf("an=%f",ans);
	}
	else if(choise=='%')
	{
		ans=a%b;
		printf("an=%f",ans);
	}


 getch();
}