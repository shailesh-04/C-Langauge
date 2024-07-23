#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct Queue
{
	int Data;
	struct Queue  *Next;

} *New_Node=NULL, *Front=NULL, *Rear=NULL, *Temp=NULL;

void Insert()
{
 clrscr();
	New_Node=(struct Queue*)malloc(sizeof(struct Queue));

	printf("Enter New Data:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Next=NULL;

	if(Front==NULL)
		{
			Front=New_Node;
		}
	else
		{
			Rear->Next=New_Node;
		}

	Rear=New_Node;
}

void Delete()
{
 clrscr();
	if(Front==NULL)
		{
			printf("Queue Is Empty");
			return;
		}
	else if(Front->Next==NULL)
		{
			printf("%d Is Deleted",Front->Data);
			free(Front);
			Front=NULL;
			return;
		}
	else
		{
			for(Temp=Front; Temp->Next->Next!=NULL; Temp=Temp->Next);

			printf("%d Is Deleted",Temp->Next->Data);

			free(Temp->Next);

			Temp->Next=NULL;

			Rear=Temp;
		}
}

void Display()
{
 clrscr();
	for(Temp=Front; Temp!=NULL; Temp=Temp->Next)
		{
			printf("%d, ",Temp->Data);
		}
	printf("NULL");
}

void Update()
{
	int Search_Now;
 clrscr();
	if(Front==NULL)
		{
			printf("Queue Is Empty");
			return;
		}

	printf("Which Data Do You Want To Search:- ");
	scanf("%d",&Search_Now);

	for(Temp=Front; Temp!=NULL && Temp->Data!=Search_Now; Temp=Temp->Next);

	if(Temp->Data==Search_Now)
		{
			printf("\n\nEnter New Data:- ");
			scanf("%d",&Temp->Data);

			printf("\n\nRecord Is Updated");
		}
	else
		{
			printf("\n\n%d Is Not Found",Search_Now);
		}
}

void main()
{
	char Choice;
	while(1)
		{
			clrscr();
			printf("0 Exit\n");
			printf("1 Insert \n");
			printf("2 Display\n");
			printf("3 Update\n");
			printf("4 Delete\n");

			printf("\nEnter Your Choie:- ");
			Choice=getch();

			switch(Choice)
				{
					case '0': exit(0);
					case '1': Insert();		getch(); break;
					case '2': Display();    getch(); break;
					case '3': Update();		getch(); break;
					case '4': Delete();		getch();	break;
					default : printf("\n\nInvalid Choice\n");
								 printf("Press Any Key...");
								 getch();
				}
		}
}