// This Is a Simple Calculator
#include<stdio.h>
#include<conio.h>
void main()
{
	long  Num1,Num2;
	char Choice;
 while(1)
	{
		clrscr();
		printf("Enter a Number:- ");
		printf("\nEnter a Number:- ");
		printf("\nEnter Operator:- ");
		gotoxy(18,1); scanf("%ld",&Num1); // Geting First Number
		gotoxy(18,2); scanf("%ld",&Num2); // Geting Secound Number
		printf("\n\nPress [#] For Exit");
		fflush(stdin);
		gotoxy(18,3); scanf("%c",&Choice);// Geting Operator

		switch(Choice)
			{
				case '+': printf("\n\n\nSum Is:- %ld",Num1+Num2);             getch(); break; // This Case For Calculate Addtion
				case '-': printf("\n\n\nSubtraction Is:- %ld",Num1-Num2);     getch(); break; // This Case For Calculate Subtraction
				case '*': printf("\n\n\nMultiplication Is:- %ld",Num1*Num2);  getch(); break; // This Case For Calculate Multiplication
				case '/': printf("\n\n\nDivision Is:- %f",(float)Num1/Num2); getch(); break; // This Case For Calculate Addtion Division
				case '%': printf("\n\n\nModulus Is:- %ld",Num1%Num2);         getch(); break; // This Case For Calculate Moduluce
				case '#': exit(0);  // This Case For EXIT The Programe
				default: printf("\n\n\n[#],[+],[-],[*],[/],[%]  Please Chose Any Of This");
							getch();  // This Default Case Can To Give a Message To User Which Type Of Operator Can Valid
			}
	}
}
