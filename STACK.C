/*
|----------------------------------------------------------------------------|
								 Implementation Of Stack Using
											Linked List
|----------------------------------------------------------------------------|
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>

int i;

struct Stack
{
	int Data;
	struct Stack *Next;

} *New_Node=NULL,*Top=NULL,*Temp=NULL;

int Found,Flag=0;

void Push();

void Create()
{
	int No;
 clrscr();
	gotoxy(18,2); printf("How Many Elements Do You Want To Enter ? ");
	scanf("%d",&No);

	for(i=0; i<No; i++)
		{
			New_Node=(struct Stack *)malloc(sizeof(struct Stack));

			gotoxy(5,4+i); printf("Enter Data:- ");
			scanf("%d",&New_Node->Data);

			if(Top==NULL)
				{
					New_Node->Next=NULL;
				}
			else
				{
					New_Node->Next=Top;
				}

			Top=New_Node;
		}
}

void Display()
{
 clrscr();

	if(Top==NULL)
		{
			gotoxy(32,12); printf("Stack Is Empty");
		}
	 else
		{
			gotoxy(33,2); printf("List Of Elements");

			gotoxy(20,2); printf("<----------:");
			gotoxy(50,2); printf(":---------->\n\n");

			for(Temp=Top; Temp!=NULL; Temp=Temp->Next)
			  {
				  printf("%d, ",Temp->Data);
			  }
			printf("NULL");
		}
}

void Push()
{
 clrscr();
	New_Node=(struct Stack *)malloc(sizeof(struct Stack));

	printf("Enter Data:- ");
	scanf("%d",&New_Node->Data);

	if(Top==NULL)
		{
			New_Node->Next=NULL;
		}
	else
		{
			New_Node->Next=Top;
		}

	Top=New_Node;
}

void Pop()
{
 clrscr();
	if(Top==NULL)
		{
			printf("\nStack Is Empty");
		}
	else
		{
			Temp=Top;
			printf("%d Is Deleted",Temp->Data);
			Top=Top->Next;
			free(Temp);
		}
}

void Search()
{
 clrscr();
	if(Top==NULL)
		{
			printf("Stack Is Empty");
			return;
		}

	printf("Which Data Do You Want To Search:- ");
	scanf("%d",&Found);

	for(Temp=Top; Temp!=NULL && Temp->Data!=Found; Temp=Temp->Next);

	if(Temp->Data==Found)
		{
			printf("\n%d Is Found",Temp->Data);
			Flag=1;
		}
	else
		{
			printf("\n%d Is Not Found",Found);
			Flag=0;
		}
}

void Update()
{
 clrscr();
	Search();
		if(Flag==1)
			{
				printf("\nEnter New Element:- ");
				scanf("%d",&Temp->Data);

				printf("\n\nRecord Was Updated");
				Flag=0;
			}
}

void main()
{
	char Choice;
	while(1){
		clrscr();

		gotoxy(12,2);  printf("Stack Using Linked List");
		gotoxy(13,19); printf("Enter Your Choice:- ");

		clrscr();

		gotoxy(12,2); printf("Main Menu");

		gotoxy(3,3);  for(i=0; i<26; i++) printf("-");
		gotoxy(3,11); for(i=0; i<26; i++) printf("-");

		gotoxy(8,4);  printf("[0]  Exit");
		gotoxy(8,5);  printf("[1]  Create Stack");
		gotoxy(8,6);  printf("[2]  Display Stack");
		gotoxy(8,7);  printf("[3]  Insert Data");
		gotoxy(8,8);  printf("[4]  Delete Data");
		gotoxy(8,9);  printf("[5]  Search Data");
		gotoxy(8,10); printf("[6]  Update Data");
		Choice=getch();

		switch(Choice)
			{
				case '0': exit(0);
				case '1': Create();	getch(); break;
				case '2': Display(); getch(); break;
				case '3': Push(); 	getch(); break;
				case '4': Pop();  	getch(); break;
				case '5': Search();	getch();	break;
				case '6': Update();	getch();	break;
				default: printf("\n\nInvalid Choice\n");
							printf("Press Any Key...");
							getch();
		  }
	 }
}