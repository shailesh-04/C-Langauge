#include<stdio.h>
#include<conio.h>
#define SZ 2
struct student
{
	int roll;
	char name[15];
}s[SZ];

int i,flag;

void Isert_Data()
{
	clrscr();
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
	printf("\n Roll      Name");
	printf("\n---------------------");
	for(i=0; i<SZ; i++)
	{
		printf("\n%d      %s",s[i].roll,s[i].name);
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
		if(se== s[i].roll)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Data Not Found");
	}
	else
	{
		printf("\n Data Is Found");
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
		printf("\n Press 0 -->  Exit");
		printf("\n\n Enter Your Choice:-");
		ch=getch();
		switch(ch)
			{
				case'1':Isert_Data(); getch(); break;
				case'2':Disply_Data(); getch(); break;
				case'3':Search_Data();getch(); break;
				case'0':exit();
				default:printf("Invalid Choise");
			}
	 }while(ch!=0);
}