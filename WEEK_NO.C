#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	clrscr();
	printf("\n choise a value:-");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("/n sunday:-");
	}
	else if(ch==2)
	{
		printf("\n monday:-");
	}
	else if(ch==3)
	{
		printf("\n tuesday");
	}
	else if(ch==4)
	{
		printf("/n westerday");
	}
	else if(ch==5)
	{
		printf("\n thrusday");
	}
	else if(ch==6)
	{
		printf("\n friday");
	}
	else if(ch==7)
	{
		printf("\n seturday");
	}
	else
	{
		printf("not invaetad value");
	}


	getch();
  }