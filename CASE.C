#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  int ch;
		clrscr();
		printf("enter two number :-");
		scanf("%d%d",&a,&b);
		printf("enter your chose:-");
		scanf("%d:-",&ch);
		switch(ch)
		{
			case 1:c=a+b;
				printf("ADDITION NUMBRR:-%d",c);
			break;
			case 2:c=a-b;
				printf("MULTIPLAY NUMBER:-%d",c);
			break;
			 default:printf("THIS NO. NOT ADDED");
		 }

	getch();
}