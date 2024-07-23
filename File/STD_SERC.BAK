#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[15];
}s[100];

int i,flag,SZ;

void Isert_Data()
{
	clrscr();
	printf("\n how many record Do you Want? :-");
	scanf("%d",&SZ);
	for(i=0; i<SZ; i++)
	{
		printf("\n Enter Student Roll Num :-");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("\n Enter Student Name :-");
		gets(s[i].name);
	}

}
void Disply_Data()
{
	clrscr();
	if(SZ==0)
	{
		printf("\n Record Is Not Avalable");

	}
	else
	{
		printf("\n Roll      Name");
		printf("\n---------------------");
		for(i=0; i<SZ; i++)
		{
			printf("\n%d      %s",s[i].roll,s[i].name);
		}
	}
	getch();
}
void Search_Data()
{
	int se;
	clrscr();
	flag=0;
	printf("\n Enter Search Roll Num :- ");
	scanf("%d",&se);
	for(i=0; i<SZ; i++)
	{
		if(se==s[i].roll)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Data Not Found");
	}
}
void Update_Data()
{
	Search_Data();
	clrscr();
	if(flag==0)
	{
		printf("\n Not Found");
	}
	else
	{
		printf("\n Enter Student Roll Num :-");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("\n Enter Student Name :-");
		gets(s[i].name);
	}
}
void Delet_Data()
{
	Search_Data();
	if(flag==0)
	{
		printf("\n Not Found");
	}
	else
	{
		s[i].roll=0;
		strcpy(s[i].name," ");
		printf("Data Is Sucsufully Delet");
	}

}
void main()
{
	int ch=0;
	do
	{
		clrscr();
		printf("\n Press 1 -->  Isert_Data");
		printf("\n Press 2 -->  Display_Data");
		printf("\n Press 3 -->  Search_Data");
		printf("\n Press 4 -->  Update Data");
		printf("\n Press 5 -->  Delet Data");
		printf("\n Press 0 -->  Exit");
		printf("\n\n Enter Your Choice :-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				Isert_Data();getch();  break;
			case 2 :
				Disply_Data();getch(); break;
			case 3 :
				Search_Data();getch(); break;
			case 4 :
				Update_Data();getch(); break;
			case 5 :
				Delet_Data(); getch(); break;
			case 0 : getch(); break;

			default: printf("\n Enter Proper Choice");
		}
	}while(ch!=0);
}



