#include<stdio.h>
#include<conio.h>
struct Name
{
	char *name;
};

struct Student
{
	struct Name Data1;
	int roll,s1,s2,s3,total;
	float per;
	struct Student *next;
};
struct Student *head=NULL,*temp,*newnode;

int i,nor,se;
char ch;

void Data();

void Create()
{
	if(head!=NULL)
	{
		printf("\n\n Allready Created List.....");
	}
	else
	{
		printf("\n\n How Many Record :-");
		scanf("%d",&nor);
		for(i=0; i<nor; i++)
		{
			newnode=(struct Student *)malloc(sizeof(struct Student));
			printf("\n Enter Roll No. :-");
			scanf("%d",&newnode->roll);
			newnode->next=NULL;
			printf("\n Enter Student Name :-");
			fflush(stdin);
			scanf("%s",&newnode->Data1.name);
			printf("\n Enter S1 MArk :-");
			scanf("%d",&newnode->s1);
			printf("\n Enter S2 MArk :-");
			scanf("%d",&newnode->s2);
			printf("\n Enter S3 MArk :-");
			scanf("%d",&newnode->s3);

			if(head==NULL)
			{
				head=newnode;
				temp=head;
			}
			else
			{
				temp->next= newnode;
				temp=temp->next;
			}
		}
		Data();
	}
}
void Data()
{
	for(temp=head; temp!=NULL; temp=temp->next)
	{
	  temp->total= temp->s1+temp->s2+temp->s3;
	  temp->per= temp->total/3.0;
	}
}
void Display()
{
	if(head==NULL)
	{
		printf("\n\n Not Found Data...");
	}
	else
	{

		for(temp=head; temp!=NULL; temp=temp->next)
		{
			printf("\n  %d    %s    %d   %d   %d   %d    %0.2f",temp->roll,temp->Data1.name,temp->s1,temp->s2,temp->s3,temp->total,temp->per);
		}
	}
}
void main()
{
	while(1)
	{
		clrscr();
		printf("\n\n #] Exit  ");
		printf("\n 1] Create  ");
		printf("\n 2] Display");

		printf("\n \n Enter Your Choise :- ");
		ch=getch();
		printf("\n----------------------");
		switch(ch)
		{
			case'#': exit();
			case'1': Create(); 		getch(); break;
			case'2': Display();		getch(); break;
			default: printf(" Invalid Option........ "); getch();
		}
	}
}