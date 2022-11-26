#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50],i;
	int lenth=0;
	clrscr();
	printf("\n\t\t \1 Find lenth WHithout Use String Fuction \1");
	printf("\n\n Enter Any Sringg:-");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		lenth++;
	}
	printf("\n Enter Your Sring Lenth of = %d",lenth);


	getch();
}