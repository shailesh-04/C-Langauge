#include<stdio.h>
#include<conio.h>
#define Limite 400

struct Book
{
	long  Book_Id,Book_Price;
	char  Book_Name[45],Book_Author[45],Book_Publisher[45];
};

struct Book Info[Limite];

void Choice(void);
void Create_Record(void);
void Add_New_Record(void);
void Update_Record(void);
void Display_Records(void);
void Delete_Last_Record(void);

long Entry;
int  i,j;

void main()
{
	Choice();
}

void Choice(void)
{
	char Choice1;

	Label:
 clrscr();
	gotoxy(22,1); for(j=0; j<34; j++) printf("*");
	gotoxy(22,2); printf("*            Choice              *");
	gotoxy(22,3); for(j=0; j<34; j++) printf("*");
	gotoxy(22,4); printf("*	 0  --->   Exit	              *");
	gotoxy(22,5); printf("*   1  --->   Create Record      *");
	gotoxy(22,6); printf("*   2  --->   Add New Record     *");
	gotoxy(22,7); printf("*   3  --->   Update Record      *");
	gotoxy(22,8); printf("*   4  --->   Display Records    *");
	gotoxy(22,9); printf("*   5  --->   Delete Last Record *");
	gotoxy(22,10); for(j=0; j<34; j++) printf("*");

	printf("\n\n\t\t\tEnter Your Choice:- ");
	Choice1=getch();

	switch(Choice1)
		{
			case '0': exit(0);				  break;
			case '1': Create_Record(); 	  break;
			case '2': Add_New_Record();	  break;
			case '3': Update_Record();		  break;
			case '4': Display_Records();    break;
			case '5': Delete_Last_Record(); break;
			default : gotoxy(26,14); printf("-> Error:- ");
						 gotoxy(32,16); printf("Invalid Choice");
						 gotoxy(31,18); printf("Press Any Key.....");

						 getch();

						 goto Label;
		}
}

void Create_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	printf("How Many Book Data Do You Want To Enter:- ");
	scanf("%d",&Entry);

	for(i=0; i<Entry; i++)
		{
			printf("\nEnter Book Id            :- ");
			scanf("%ld",&Info[i].Book_Id);
			fflush(stdin);
			printf("Enter Book Name          :- ");
			gets(Info[i].Book_Name);
			printf("Enter Book Author Name   :- ");
			gets(Info[i].Book_Author);
			printf("Enter Book Publisher Name:- ");
			gets(Info[i].Book_Publisher);
			printf("Enter Book Price         :- ");
			scanf("%ld",&Info[i].Book_Price);
		}
 getch();

 Choice();
}

void Add_New_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	printf("\nEnter Book Id              :- ");
	scanf("%ld",&Info[i].Book_Id);
	fflush(stdin);
	printf("Enter Book Name            :- ");
	gets(Info[i].Book_Name);
	printf("Enter Book Author Name     :- ");
	gets(Info[i].Book_Author);
	printf("Enter Book Publisher Name  :- ");
	gets(Info[i].Book_Publisher);
	printf("Enter Book Price           :- ");
	scanf("%ld",&Info[i].Book_Price);

	Entry++;

	Choice();
}

void Update_Record(void)
{
	struct Book Temp;

	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Entry==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,12); printf("List Is Empty");
			gotoxy(32,14); printf("Press Any Key.....");

			getch();
			Choice();
		}
	printf("Enter The Id Of The Book Whose Record You Want To Update:- \n");
	scanf("%ld",&Temp.Book_Id);

	for(i=0; i<Entry; i++)
		{
			if(Temp.Book_Id==Info[i].Book_Id)
				{
					fflush(stdin);
					printf("Enter Book Name            :- ");
					gets(Temp.Book_Name);
					printf("Enter Book Author Name     :- ");
					gets(Temp.Book_Author);
					printf("Enter Book Publisher Name  :- ");
					gets(Temp.Book_Publisher);
					printf("Enter Book Price           :- ");
					scanf("%ld",&Temp.Book_Price);
					Info[i]=Temp;
				}
		}
	Choice();
}

void Display_Records(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Entry==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(33,12); printf("List Is Empty");
			gotoxy(31,14); printf("Press Any Key.....");

			getch();

			Choice();
		}

	for(i=0; i<Entry; i++)
		{
			clrscr();

			for(j=0; j<80; j++) printf("*");
			gotoxy(36,2); printf("Book Data\n");
			for(j=0; j<80; j++) printf("*");

			printf("Book Id              :- %ld\n",Info[i].Book_Id);
			printf("Book Name            :- %s\n",Info[i].Book_Name);
			printf("Book Author Name     :- %s\n",Info[i].Book_Author);
			printf("Book Publisher Name  :- %s\n",Info[i].Book_Publisher);
			printf("Book Price           :- %ld\n",Info[i].Book_Price);

			gotoxy(22,12); printf("Press Any key For See Next Record --->");
			getch();
		}
	gotoxy(32,17); printf("List Is Over");
	gotoxy(32,19); printf("Press Any key......");
	getch();
 Choice();
}

void Delete_Last_Record(void)
{
	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	if(Entry==0)
		{
			window(1,1,80,25);
			textbackground(BLACK);
			clrscr();

			gotoxy(34,12); printf("List Is Empty");
			gotoxy(32,14); printf("Press Any Key.....");

			getch();

			Choice();
		}

	gotoxy(28,14); printf("Last Record Is Deleted");
	Entry--;

	getch();

	Choice();
}