#include<stdio.h>
#include<conio.h>
#define SZ 2
struct emp
{
	int id;
	char name[15];
}emp[SZ];
int i,serc;
char ch;
void insert()
{
	clrscr();
	for(i=0; i<SZ; i++)
	{
		printf("\n Emter Employ Id   :-");
		scanf("%d",&emp[i].id);
		fflush(stdin);
		printf("\n Entet Employ Name :-");
		gets(emp[i].name);
	}
	getch();
}
void display()
{
	clrscr();
	gotoxy(1,1);printf("Employ Id	Employ Name");
	gotoxy(1,2);printf("-----------------------------");
	for(i=0; i<SZ; i++)
	{
		gotoxy(3,3+i);cprintf("%d",emp[i].id);
		gotoxy(10,3+i);cprintf("%s",emp[i].name);
	}
	getch();
}
void main()
{
	while(1)
	{
		clrscr();
		printf("\n #] Exit");
		printf("\n 1] Insert Data");
		printf("\n 2] Display Data");
		printf("\n 3] Serch Data");
		printf("\n 4] Delet Data");
		printf("\n\n Enter Choise..:- ");
		ch=getch();
		switch(ch)
		{
			case '#': exit();
			case '1': insert(); break;
			case '2':  display(); break;
			case '3': break;
			case '4': break;
			default:printf("invalid Choise\n");getch();
		}
	}
}
