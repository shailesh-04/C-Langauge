#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\t\t\1 COLOR NAME \1");

	printf("\n\n '0' EXIT");
	printf("\n '1' RED");
	printf("\n '2' YELOW");
	printf("\n '3' GREEN");
	printf("\n '4' WHITE");
	printf("\n '5' BLANK");
       while(1)
       {
	printf("\n Enter choise :-");
	ch=getch();

	if(ch=='0')
	{
		exit();
	}
	if(ch=='1')
	{
		printf("\n\n RED");
	}
	if(ch=='2')
	{
		printf("\n\n YELLOW");
	}
	if(ch=='3')
	{
		printf("\n\n GREEN");
	}
	if(ch=='4')
	{
		printf("\n\n WHITE");
	}
	if(ch=='5')
	{
		printf("\n\n BLANK");
	}
       /*	else
	{
		printf("\n\n\t Invelid Choise");
	}  */
      }
}