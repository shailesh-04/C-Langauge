#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

void ASCII1()
{
	int ASCII_Value;
 clrscr();

	printf("Enter The ASCII Value:- ");
	scanf("%d",&ASCII_Value);

	printf("\nChar or Symbol is:- %c",ASCII_Value);
}

void ASCII2()
{
	char Char;
 clrscr();

	printf("Enter Any Keyboard Key:- ");
	scanf("%c",&Char); // Enter Any Keyboard Key

	printf("\nASCII Value is= %d",Char);
}

void ASCII3()
{
 clrscr();

	for(i=0; i<=126; i++)
		{
			printf("%d) %c\t",i,i);
		}
}

void ASCII4()
{
 clrscr();

	for(i=127; i<=255; i++)
		{
			printf("%d) %c\t",i,i);
		}
}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			printf("0 Exit\n");
			printf("1 ASCII To Char\n");
			printf("2 Char To ASCII\n");
			printf("3 Print 0 To 126 ASCII Table\n");
			printf("4 Print 127 255 ASCII Table\n");

			fflush(stdin);

			printf("\nEnter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '0': exit(0);
					case '1': ASCII1();	getch(); break;
					case '2': ASCII2();	getch(); break;
					case '3': ASCII3();  getch(); break;
					case '4': ASCII4();	getch(); break;
					default: printf("\n\n Invailid Choice");
								printf("\n\n Press Any Key...");
								getch();
				}
		}
}