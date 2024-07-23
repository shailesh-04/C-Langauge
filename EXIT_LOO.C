#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	char name[200];
	 clrscr();
	 printf("\n\t\t\t EXIT LOOP");

	 printf("\n\n Enter youer Name :-");
	 scanf("%s",&name);
	 do
	 {
		printf("\n%s",name);
		i++;
	 }
	 while(i<=4);

	getch();
}