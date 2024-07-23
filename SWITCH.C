#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int ch;
	clrscr();

	printf("enter no A:-");
	scanf("%d:-",&a);
	printf("enter no.B:-");
	scanf("%d:-",&b);

	printf("enter choise CASE:-");
	scanf("%d:-",&ch);

	switch(ch)
	{
	  case 1:c=a+b;
				printf("ANS:-%d",c);
	  break;
	  case 2:c=a-b;
			  printf("ANS:-%d",c);
	  break;
	  case 3:c=a*b;
				printf("ANS:-%d",c);
	  break;
	  case 4:c=a/b;
	  break;
	  default:  printf("not choise");

	}

	getch();
  }