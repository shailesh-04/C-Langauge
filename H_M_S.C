#include<stdio.h>
#include<conio.h>
void main()
{  int h=0,m=0,s=0;
	clrscr();
	printf("enter second:-");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("\n\tHouse=%d",h);
	printf(":\n\tMinite=%d",m);
	printf(":\n\tSecond=%d",s);


	getch();
  }