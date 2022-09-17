#include<stdio.h>
#include<conio.h>
#define Enter 13

int i;
char U[]={"Admin"},P[]={"369"};
char user_name[45],password[45];

void get_data()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(25,9,55,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(11,2); cprintf("User Name");

	textcolor(GREEN);
	gotoxy(3,3);
	for(i=0; i<=12; i++) cprintf("--");

	textcolor(CYAN);
	gotoxy(12,4); cprintf("%s",user_name);

	textcolor(YELLOW);
	gotoxy(12,6); cprintf("Password");

	textcolor(GREEN);
	gotoxy(3,7);
	for(i=0; i<=12; i++) cprintf("--");

	textcolor(CYAN);
	gotoxy(13,8); cprintf("%s",password);
}

void login()
{
	window(1,1,80,25);
	textbackground(BLUE);
	clrscr();

	window(8,5,72,21);
	textbackground(RED);
	clrscr();

	window(14,8,65,18);
	textbackground(BLACK);
	clrscr();

	textcolor(RED);
	gotoxy(23,2); cprintf("LogIn");

	textcolor(GREEN);
	gotoxy(5,3);
	for(i=0; i<=21; i++) cprintf("--");

	textcolor(YELLOW);
	gotoxy(8,5); cprintf("Enter UserName:-");
	gotoxy(8,6); cprintf("Enter Password:-");

	gotoxy(25,5); scanf("%s",user_name);
	gotoxy(25,6);
	for(i=0; i!='13'; i++)
	{
			password[i]=getch();
			if(password[i]==Enter)
			 {
				password[i]=NULL;
				break;
			 }
			 printf("*");
	}

	if(strcmp(user_name,U)==0 && strcmp(password,P)==0)
		{
			textcolor(RED+BLINK);
			gotoxy(26,8); cprintf("Correct");
			getch();
			get_data();
		}
	else
		{
			textcolor(RED+BLINK);
			gotoxy(26,8); cprintf("Incorect");
		}
}
void main()
{
  login();
getch();
}