#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	char name[200];
	clrscr();
	printf("\t\t\1 \2 ENTRY CONTROL LOOP \2 \1");

	printf("\n Enter Your Name :-");
	scanf("%s",&name);
	for(i=1; i<=5; i++)
	{
		printf("\n%s",name);
	}
	getch();
}