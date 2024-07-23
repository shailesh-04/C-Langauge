#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	char name[15];
}emp[100];

int i,serc,SZ,flag;
char ch;
void insert()
{
	clrscr();
	printf("\n How Many Record Do You Want ? :-");
	scanf("%d",&SZ);
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
	if(SZ==0)
	{
		printf("\n Not Avalable Record");
	}
	else
	{
		gotoxy(1,2);printf("Employ Id	Employ Name");
		gotoxy(1,3);printf("-----------------------------");
		for(i=0; i<SZ; i++)
		{
			gotoxy(3,4+i);cprintf("%d",emp[i].id);
			gotoxy(17,4+i);cprintf("%s",emp[i].name);
		}
	}
	getch();
}
void serch()
{
	clrscr();
	serc=0;
	printf("Whose ID Do You Want To Serch? :-");
	scanf("%d",&serc);
	for(i=0; i<SZ; i++)
	{
		if(serc==emp[i].id)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Not found Serch  Id \1\2");
	}
	else
	{
		gotoxy(1,2);printf("Employ Id	Employ Name");
		gotoxy(1,3);printf("-----------------------------");
		gotoxy(3,4+i);cprintf("%d",emp[i].id);
		gotoxy(17,4+i);cprintf("%s",emp[i].name);
	}
	getch();
}
void updat()
{
	clrscr();
	serc=0;
	printf("Whose ID Do You Want To Updat? :-");
	scanf("%d",&serc);
	for(i=0; i<SZ; i++)
	{
		if(serc==emp[i].id)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Not found Id \1\2");
	}
	else
	{
		printf("\n Enter Employ Updat ID :-");
		scanf("%d",&emp[i].id);
		fflush(stdin);
		printf("\n Enter Employ Updat Name :-");
		gets(emp[i].name);
		printf("\n\n\t\2\1 Sucsufully Updat \1\2");
		getch();
	}
}
void Delet()
{
	clrscr();
	serc=0;
	printf("Whose ID Do You Want To Delet? :-");
	scanf("%d",&serc);
	for(i=0; i<SZ; i++)
	{
		if(serc==emp[i].id)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Not found Id \1\2");
	}
	else
	{
		emp[i].id=0;
		strcpy(emp[i].name," ");
		printf("\n\n\t\2\1 Sucsufully Updat \1\2");
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
		printf("\n 4] Updat Data");
		printf("\n 5] Delet Data");
		printf("\n\n Enter Choise..:- ");
		ch=getch();
		switch(ch)
		{
			case '#': exit();
			case '1': insert();   break;
			case '2': display();  break;
			case '3': serch();    break;
			case '4': updat();    break;
			case '5': Delet();    break;
			default:printf("invalid Choise\n");getch();
		}
	}
}
