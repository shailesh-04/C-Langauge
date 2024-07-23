#include<stdio.h>
#include<conio.h>

int a,b,ans; // Global Variables

void sub()
{
 clrscr();
	printf("========Subtraction=======\n");
	printf("Enter two number:- ");
	scanf("%d",&a);

	printf("Enter two number:- ");
	scanf("%d",&b);

	printf("\n\nSubtraction:- %d",a-b);
}

void mult()
{
 clrscr();
	printf("-----------Multiplication---------\n");
	printf("Enter two number:- ");
	scanf("%d",&a);

	printf("Enter two number:- ");
	scanf("%d",&b);

	printf("\n\nMultiplication:- %d",a*b);
}

void sum()
{
 clrscr();
	printf("-----------Sum---------\n");
	printf("Enter two number:- ");
	scanf("%d",&a);

	printf("Enter two number:- ");
	scanf("%d",&b);

	printf("\n\nAddition:- %d",a+b);
}

void main()
{
	char Choice;
	while(1){
		clrscr();
		printf("0 :- exit program\n");
		printf("1 :- Calculate Sum\n");
		printf("2 :- Calculate Mul\n");
		printf("3 :- Calculate Sub\n");

		printf("\n Enter Your Choice :-");
		Choice=getch();

		switch(Choice)
			{
				case '0': exit(0);
				case '1': sum();   getch(); break;
				case '2': mult();  getch(); break;
				case '3': sub();   getch(); break;
				default: printf("\n\ninvaled choice");
							printf("\nPress Any Key...");
							getch();
			}
	}
}