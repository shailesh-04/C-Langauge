#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>

struct Link_List_Prev
{
	int Data;
	struct Link_List_Prev *Prev;

} *New_Node=NULL, *Start=NULL, *End=NULL ,*Temp=NULL;

void Create()
{
	int i,Nodes;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%d",&Nodes);

	printf("\n");
	for(i=0; i<Nodes; i++)
		{
			New_Node=(struct Link_List_Prev*)malloc(sizeof(struct Link_List_Prev));

			printf("Enter Data:- ");
			scanf("%d",&New_Node->Data);

			New_Node->Prev=NULL;

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
}

void Display()
{
 clrscr();
	for(Temp=End; Temp!=NULL; Temp=Temp->Prev)
		{
			printf("%d -> ",Temp->Data);
		}
	printf("NULL");
}

void Insert_First()
{
 clrscr();
	New_Node=(struct Link_List_Prev*)malloc(sizeof(struct Link_List_Prev));

	printf("Enter New Element:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Prev=NULL;

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
	else if(Start->Prev==NULL)
		{

		}
	else
		{
			for(Temp=End; Temp->Prev->Prev!=NULL; Temp=Temp->Prev);

			free(Temp->Prev->Prev);
			Temp->Prev=NULL;
			Start=Temp;

			printf("Data Is Deleted");
		}
}

void Insert_Last()
{
 clrscr();
	New_Node=(struct Link_List_Prev*)malloc(sizeof(struct Link_List_Prev));

	printf("Enter New Element:- ");
	scanf("%d",&New_Node->Data);

	New_Node->Prev=End;

	if(Start==NULL)
		{
			Start=New_Node;
		}
	End=New_Node;
}

void Delete_Last()
{

}

void Search()
{

}

void Insert_Between()
{

}

void Delete_Specific()
{

}

void Update()
{

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
			printf("8 Delete Specific\n");
			printf("9 Update\n");

			printf("\nEnter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '#': exit(0);
					case '0': Create();				getch(); break;
					case '1': Display();				getch(); break;
					case '2': Insert_First();		getch(); break;
					case '3': Delete_First();     getch(); break;
					case '4': Insert_Last();		getch(); break;
					case '5': Delete_Last();		getch(); break;
					case '6': Search();				getch(); break;
					case '7': Insert_Between();	getch(); break;
					case '8': Delete_Specific();	getch(); break;
					case '9': Update();				getch(); break;
					default: printf("\n\nInvalid Choice\n");
								printf("Press Any Key...");
								getch();
				}
		}
}