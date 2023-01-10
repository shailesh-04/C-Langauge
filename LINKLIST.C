#include<stdio.h>
#include<conio.h>
struct LinkList
{
	int data;
	struct LinkList *next;
};
		struct LinkList *newnode,*head,*temp;

	 int nor,i,flag,se;
void create()
{
	clrscr();
	if(flag==0)
	{
		printf("\n How MAny Record :-");
		scanf("%d",&nor);
		for(i=0; i<nor; i++)
		{
			newnode=(struct LinkList *)malloc(sizeof(struct LinkList));
			printf("\n Enter Data :-");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL)
			{
				head=newnode;
				temp=head;
			}
			temp->next=newnode;
			temp=temp->next;
		}
	}
	else
	{
		printf("\n List olredy Created");
	}
}
void Display()
{
	printf("\n------------------------\n\n");
	if(head==NULL)
	{
		printf("\n\n Record Not Found");
	}
	else
	{
		for(temp=head; temp!=NULL; temp=temp->next)
		{
			printf("%d -> ",temp->data);
		}
	}
	printf(" NULL");
}
void lastinsert()
{
	printf("\n------------------------");
	newnode=(struct LinkList *)malloc(sizeof(struct LinkList));
	printf("\n\n Enter New Data :-");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		for(temp=head; temp->next!=NULL; temp=temp->next)
		{
			;// Do Nothing
		}
		temp->next=newnode;
	}

}

void firstinsert()
{
	printf("\n------------------------");
	newnode=(struct LinkList *)malloc(sizeof(struct LinkList));
	printf("\n\n Enter Data :-");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
void serach()
{
	printf("\n\n Enter Search Eliment :-");
	scanf("%d",&se);
	flag=0;
	for(temp=head; temp->next!=NULL; temp=temp->next)
	{
		if(se==temp->next)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Not Found");
	}
	else
	{
		printf("\n Found");
	}
}
void beetween_n()
{
	if(flag==0)
	{
		break;
	}
	else
	{
		for(temp=head; temp->next!=NULL; temp=temp->next)
		{
			if
		}
	}
}
void main()
{
	char ch;
	while(1)
	{
		clrscr();
		printf("\n#] Exit");
		printf("\n1] Creat");
		printf("\n2] Display ");
		printf("\n3] Lastinsert");
		printf("\n4] Firstinsert");
		printf("\n5] Search Data");
		printf("\n\n\t Enter Your Choise :-");
		ch=getch();
		switch(ch)
		{
			case'#': exit();
			case'1': create();flag=1;getch(); break;
			case'2': Display();   getch(); break;
			case'3': lastinsert();getch();break;
			case'4': firstinsert();getch(); break;
			case'5': serach(); getch(); break;
			default: printf("\nInvalide Option ");  getch();
		}
	}
}





