#include<stdio.h>
#include<conio.h>
void main()
{
	char i,ch;
	while(1)
	{
		clrscr();
		printf("\nn:- name\n");
		printf("x:- Exit\n");

		printf("\n Enter your choise\n");
		ch=getch();
		switch(ch)
		{
			case 'x': exit(0);
			case 'n'&& 'N': printf("\nEnter Name:-");
						 scanf("%s",i);
						 for(i=0; i<=10; i++){ printf("%s",i); }
						 getch(); break;

			default: printf("invaled choise");
						printf("Enter any Choise:-");


		 }

	}


}