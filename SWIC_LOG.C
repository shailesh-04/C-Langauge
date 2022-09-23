#include<stdio.h>
#include<conio.h>
void sub()
{
	int a,b,ans;
	clrscr();
	printf("========subprection=======");
	printf("Enter two number");
	scanf("%d %d ",&a,&b);

	ans=a-b;
	printf("%d",ans);

 getch();
}
void mult()
{

	int a,b,ans;
	clrscr();
	printf("-----------mult---------");
	printf("Enter two number");
	scanf("%d %d ",&a,&b);

	ans=a*b;
	printf("%d",ans);

 getch();
}


void sum()
{

	int a,b,ans;
	clrscr();

	printf("Enter two number");
	scanf("%d %d ",&a,&b);

	ans=a+b;
	printf("%d",ans);

 getch();
}


void main()
{
	int ch;
	while(1)
	{
	clrscr();
	printf("0 :-open my file\n");
	printf("1 :-open my game\n");
	printf("2 :-loging id\n");
	printf("3 :- exit program\n");

	printf("\n choice :-");
	scanf("%d",&ch);
	getch();

	switch(ch)
	{
		case 0: 	exit(0);
		case 1:  sum();
		case 2:  mult();
		case 3:  sub();
		default: printf("invaled choice");

		}




	getch();
}
 }