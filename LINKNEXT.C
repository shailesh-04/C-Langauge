#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>

struct Link_List_Next
{
	int Data;

   struct Link_List_Next *Next;

} *New_Node=NULL, *Start=NULL, *End=NULL, *Temp=NULL, *Temp1=NULL;

int i,Search_Now;

void Create()
{
	int Record;
 clrscr();
	textcolor(RED);
	gotoxy(5,3); cprintf("How Many Records Do You Want To Enter:- ");
	scanf("%d",&Record);

	printf("\n");
	for(i=0; i<Record; i++)
		{
			New_Node=(struct Link_List_Next*)malloc(sizeof(struct Link_List_Next));

			textcolor(YELLOW);
			cprintf("Enter Data:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Next=NULL;

			if(Start==NULL)
				{
					Start=New_Node;
				}
			else
				{
					End->Next=New_Node;
				}

			End=New_Node;
		}
}

void Display()
{
 clrscr();
	textcolor(RED);
	gotoxy(23,1); printf("-----------: List Of Data :-----------");

	printf("\n\n");
	for(Temp=Start; Temp!=NULL; Temp=Temp->Next)
		{
			textcolor(YELLOW);
			cprintf("%d",Temp->Data);

			textcolor(RED);
			cprintf(", ");
		}
	textcolor(YELLOW);
	cprintf("NULL");
}

void Insert_First()
{
 clrscr();
	New_Node=(struct Link_List_Next*)malloc(sizeof(struct Link_List_Next));

	textcolor(RED);
	gotoxy(5,3); cprintf("Enter New Data:- ");
	scanf("%d",&New_Node->Data);

	textcolor(YELLOW+BLINK);
	gotoxy(24,10); cprintf("%d Is Inserted At First Position",New_Node->Data);

	New_Node->Next=Start;

	if(End==NULL)
		{
			End=New_Node;
		}

	Start=New_Node;
}

void Delete_First()
{
 clrscr();
	textcolor(YELLOW+BLINK);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}
	else
		{
			Temp=Start;
			Start=Start->Next;

			gotoxy(34,13); cprintf("%d Is Deleted",Temp->Data);
			free(Temp);
		}
}

void Insert_Last()
{
 clrscr();
	New_Node=(struct Link_List_Next*)malloc(sizeof(struct Link_List_Next));

	textcolor(RED);
	gotoxy(5,3); cprintf("Enter New Data:- ");
	scanf("%d",&New_Node->Data);

	textcolor(YELLOW+BLINK);
	gotoxy(24,10); cprintf("%d Is Inserted At Last Position",New_Node->Data);

	New_Node->Next=NULL;

	if(Start==NULL)
		{
			Start=New_Node;
		}
	else
		{
			End->Next=New_Node;
		}

	End=New_Node;
}

void Delete_Last()
{
 clrscr();
	textcolor(YELLOW+BLINK);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}
	else if(Start->Next==NULL)
		{
			gotoxy(34,13);
			cprintf("%d Is Deleted",Start->Data);
			free(Start);
			Start=NULL;
			return;
		}
	else
		{
			for(Temp=Start; Temp->Next->Next!=NULL; Temp=Temp->Next);

			gotoxy(34,13);
			cprintf("%d Is Deleted",Temp->Next->Data);

			free(Temp->Next);

			Temp->Next=NULL;

			End=Temp;
		}
}

void Search()
{
 clrscr();
	textcolor(YELLOW+BLINK);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	textcolor(RED);
	gotoxy(5,3); cprintf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	for(Temp=Start; Temp!=NULL && Temp->Data!=Search_Now; Temp=Temp->Next);

	textcolor(YELLOW);
	if(Temp->Data==Search_Now)
		{
			gotoxy(34,5); cprintf("%d Is Found",Temp->Data);
		}
	else
		{
			gotoxy(33,5); cprintf("%d Is Not Found",Search_Now);
		}
}

void Insert_Between()
{
 clrscr();

	textcolor(YELLOW);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	Search();

	if(Temp->Data==Search_Now)
		{
			if(Temp->Next==NULL)
				{
					Insert_Last();
					return;
				}

			New_Node=(struct Link_List_Next*)malloc(sizeof(struct Link_List_Next));

			textcolor(RED);
			gotoxy(5,6); cprintf("Enter New Data:- ");
			scanf("%d",&New_Node->Data);

			textcolor(YELLOW+BLINK);
			gotoxy(32,10); cprintf("%d Is Inserted",New_Node->Data);

			New_Node->Next=Temp->Next;
			Temp->Next=New_Node;
		}
}

void Delete_Specific()
{
 clrscr();

	textcolor(YELLOW+BLINK);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	textcolor(RED);
	gotoxy(5,3); cprintf("Which Data Do You Want To Delete:- ");
	scanf("%d",&Search_Now);

	if(Search_Now==Start->Data)
		{
			Delete_First();
			return;
		}

	for(Temp=Start; Temp!=NULL && Temp->Next->Data!=Search_Now; Temp=Temp->Next);

	if(Temp->Next->Data==Search_Now)
		{
			Temp1=Temp->Next;

			textcolor(YELLOW+BLINK);
			gotoxy(32,10); cprintf("%d Is Deleted",Temp1->Data);

			Temp->Next=Temp->Next->Next;

			free(Temp1);
		}
	else
		{
			textcolor(YELLOW+BLINK);
			gotoxy(32,10); cprintf("%d Is Not Found",Search_Now);
		}
}

void Update()
{
 clrscr();
	textcolor(YELLOW+BLINK);
	if(Start==NULL)
		{
			gotoxy(34,13); cprintf("List Is Empty");
			return;
		}

	Search();

	if(Temp->Data==Search_Now)
		{
			textcolor(RED);
			gotoxy(5,7); cprintf("Enter New Data:- ");
			scanf("%d",&Temp->Data);

			textcolor(YELLOW);
			gotoxy(30,14); cprintf("Record Is Updated");
		}
}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			textcolor(RED);
			gotoxy(38,2);  cprintf("Choices");

         textcolor(GREEN);
         gotoxy(19,3);  cprintf("-------------------------------------------");
			gotoxy(19,15); cprintf("-------------------------------------------");

         textcolor(CYAN);
			gotoxy(19,4);  cprintf("            Press (#) For Exit             ");
			gotoxy(19,5);  cprintf("            Press (0) Create               ");
			gotoxy(19,6);  cprintf("            Press (1) Display              ");
			gotoxy(19,7);  cprintf("            Press (2) Insert First         ");
			gotoxy(19,8);  cprintf("            Press (3) Delete First         ");
			gotoxy(19,9);  cprintf("            Press (4) Insert Last          ");
			gotoxy(19,10); cprintf("            Press (5) Delete Last          ");
			gotoxy(19,11); cprintf("            Press (6) Search               ");
			gotoxy(19,12); cprintf("            Press (7) Insert Between       ");
			gotoxy(19,13); cprintf("            Press (8) Delete Specific      ");
			gotoxy(19,14); cprintf("            Press (9) Update               ");

         textcolor(RED);
			gotoxy(30,17); cprintf("Enter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();				getch(); break;
					case '1': Display();				getch(); break;
					case '2': Insert_First();     getch(); break;
					case '3': Delete_First();		getch(); break;
					case '4': Insert_Last();		getch(); break;
					case '5': Delete_Last();		getch(); break;
					case '6': Search();				getch(); break;
					case '7': Insert_Between();	getch(); break;
					case '8': Delete_Specific();  getch(); break;
					case '9': Update();				getch(); break;
					default: textcolor(YELLOW);
								gotoxy(30,19); cprintf("---------: Error :---------");

                        textcolor(RED+BLINK);
								gotoxy(37,21); cprintf("Invalid Choice");

                        textcolor(YELLOW);
								gotoxy(31,23); cprintf("......Press Any Key......");
								getch();
				}
		}
}