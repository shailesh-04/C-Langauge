#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>

struct D_Link
{
  int Data;
  struct D_Link *Prev, *Next;

} *New_Node=NULL, *Start=NULL, *End=NULL, *Temp=NULL;

int Flag=0;

void Create()
{
	int No_Nodes,i;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&No_Nodes);

	for(i=0; i<No_Nodes; i++)
		{
			New_Node=(struct D_Link*)malloc(sizeof(struct D_Link));

			printf("Enter Data:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Prev=Start;
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

//First To Last
void Display()
{
	Temp=Start;
 clrscr();
	while(Temp!=NULL)
		{
			printf("%d -> ",Temp->Data);
			Temp=Temp->Next;
		}
}

//Last To First
void Display1()
{
	Temp=End;
 clrscr();
	while(Temp!=NULL)
		{
			printf("%d -> ",Temp->Data);
			Temp=Temp->Prev;
		}
}

void Insert_First()
{
 clrscr();
	New_Node=(struct D_Link*)malloc(sizeof(struct D_Link));

	printf("Enter Data:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Prev=NULL;
	New_Node->Next=Start;

	if(Start==NULL)
		{
			End=New_Node;
		}
	else
		{
			Start->Prev=New_Node;
		}
	Start=New_Node;
}

void Delete_First()
{
 clrscr();
	if(Start==NULL)
		{
			printf("List Is Empty");
			return;
		}
	else
		{
			Temp=Start;
			printf(" %d Is Deleted",Temp->Data);
			Start=Start->Next;
			free(Temp);
			Start->Prev=NULL;
		}
}

void Insert_Last()
{
 clrscr();
	New_Node=(struct D_Link*)malloc(sizeof(struct D_Link));

	printf("Enter Data:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Prev=End;
	New_Node->Next=NULL;

	if(End==NULL)
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
	if(Start==NULL)
		{
			printf("List Is Empty");
			return;
		}
	else
		{
			End=End->Prev;
			free(Temp);
			End->Next=NULL;
		}
}

void Search()
{
	int Search_Now;
 clrscr();
	printf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	Temp=Start;

	while(Temp!=NULL && Temp->Data!=Search_Now)
		{
			Temp=Temp->Next;
		}

	if(Temp->Data==Search_Now)
		{
			printf("%d Is Found",Temp->Data);
			Flag=1;
		}
	else
		{
			printf("%d Is Not Found",Search_Now);
		}
}

void Insert_Between()
{

}

void Delete_Specific()
{

}

void Update()
{
 clrscr();
	Search();
		if(Flag==1)
			{
				printf("\n\nEnter New Element:- ");
				scanf("%d",&Temp->Data);

				printf("\n\nData Is Updated");
			}
}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			printf("# Exit\n");
			printf("0 Create\n");
			printf("1 Display\n");
			printf("2 Insert First\n");
			printf("3 Delete First\n");
			printf("4 Insert Last\n");
			printf("5 Delete Last\n");
			printf("6 Search\n");
			printf("7 Insert Between\n");
			printf("8 Delete Spesific\n");
			printf("9 Update\n");

			printf("\nEnter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();				getch(); break;
					case '1': Display();				getch(); break;
					case '2': Insert_First();  	getch(); break;
					case '3': Delete_First();		getch(); break;
					case '4': Insert_Last();		getch(); break;
					case '5': Delete_Last();		getch(); break;
					case '6': Search();				getch(); break;
					case '7': Insert_Between();   getch();	break;
					case '8': Delete_Specific();	getch(); break;
					case '9': Update();				getch();	break;
					default:  printf("\n\nInvalid Choice\n\n");
								 printf("Press Any Key...");
								 getch();
				}
		}
}