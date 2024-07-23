#include<stdio.h>
#include<conio.h>

int i;




void my()
{
	window(1,1,80,25);
	textbackground(15); // White
	clrscr();

	window(5,3,75,25);
	textbackground(1);    //Black
	clrscr();

	window(10,6,70,25);
	textbackground(2);       //Green
	clrscr();

	window(15,8,65,25);
	textbackground(3);        //Cyan
	clrscr();

	window(20,10,60,25);
	textbackground(4);           //Reb
	clrscr();

	gotoxy(1,3);
	for(i=0; i<=19; i++)
  {     textcolor(GREEN);
	 cprintf("-_");     }

	textcolor(YELLOW);
	gotoxy(16,4); cprintf("User Name");

	gotoxy(1,5); for(i=0; i<=19; i++){
	textcolor(GREEN); cprintf("-_"); }

	window(25,17,55,25);
	textbackground(3);        //Magenta
	clrscr();

	gotoxy(2,2); for(i=0; i<=13; i++){
	textcolor(YELLOW); cprintf("=_");   }

	 gotoxy(2,4); textcolor(WHITE); cprintf("SHAILESH");
	 gotoxy(6,5); textcolor(WHITE); cprintf("MAKAVANA");

	 gotoxy(9,8); textcolor(RED+BLINK); cprintf("Press Enter");



}



void pass()
{

	int choice,i;
	char D[]={"8899"};
	int id;
	clrscr();
	printf("\nEnter Id:-");
	scanf("%d",&id);

	if(id==8899)
	{
		printf("\nID Is Corect");
		my();

	}
	else
	{
		printf("id rong");
		}

 }
void main()
{
	char choice;
	while(1)
	{
	clrscr();

	printf("press 1 re try\n");
	printf("press 0 exit\n");

	printf("\nEnter Choice:-");
	choice=getch();

	switch(choice)
		{
		case '0': exit(0);
		case '2': pass; getch(); break;
		default: printf("\n\n invaled choice");
					printf("\n\n press any key:");

		}
	 }
}

