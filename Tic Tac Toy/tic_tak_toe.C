#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include <stdlib.h>

#include "grafics.h"
#include "function.h"
#include "variable.h"
void ProcessX()
{
	textcolor(WHITE);
	switch(ch)
	{
	  case '1': if(box[0] == '*' || box0[0] == '@'){Player1();}	else{gotoxy(10,8);cprintf("X");  box[0] = '*'; } break;
	  case '2':	if(box[1] == '*' || box0[1] == '@'){Player1();}	else{gotoxy(20,8);cprintf("X");  box[1] = '*'; } break;
	  case '3':	if(box[2] == '*' || box0[2] == '@'){Player1();}	else{gotoxy(30,8);cprintf("X");  box[2] = '*'; } break;
	  case '4':	if(box[3] == '*' || box0[3] == '@'){Player1();}	else{gotoxy(10,12);cprintf("X"); box[3] = '*'; } break;
	  case '5':	if(box[4] == '*' || box0[4] == '@'){Player1();}	else{gotoxy(20,12);cprintf("X"); box[4] = '*'; } break;
	  case '6':	if(box[5] == '*' || box0[5] == '@'){Player1();}	else{gotoxy(30,12);cprintf("X"); box[5] = '*'; } break;
	  case '7':	if(box[6] == '*' || box0[6] == '@'){Player1();}	else{gotoxy(10,16);cprintf("X"); box[6] = '*'; } break;
	  case '8':	if(box[7] == '*' || box0[7] == '@'){Player1();}	else{gotoxy(20,16);cprintf("X"); box[7] = '*'; } break;
	  case '9':	if(box[8] == '*' || box0[8] == '@'){Player1();}	else{gotoxy(30,16);cprintf("X"); box[8] = '*'; } break;
	}
	X_out();
}
void ProcessO()
{
	textcolor(WHITE);
	switch(Och)
	{
	  case '1':	if(box0[0] == '@' || box[0] == '*'){ Player2(); } else{ gotoxy(10,8);cprintf("O");  box0[0] = '@';} break;
	  case '2':	gotoxy(20,8);cprintf("O");  box0[1] = '@';  break;
	  case '3':	gotoxy(30,8);cprintf("O");  box0[2] = '@';  break;
	  case '4':	gotoxy(10,12);cprintf("O"); box0[3] = '@'; break;
	  case '5':	gotoxy(20,12);cprintf("O"); box0[4] = '@'; break;
	  case '6':	gotoxy(30,12);cprintf("O"); box0[5] = '@'; break;
	  case '7':	gotoxy(10,16);cprintf("O"); box0[6] = '@'; break;
	  case '8':	gotoxy(20,16);cprintf("O"); box0[7] = '@'; break;
	  case '9':	gotoxy(30,16);cprintf("O"); box0[8] = '@'; break;
	}
	O_out();
}
void X_out()
{
//=====================VERTICLE=================

	if( box[0] == '*' &&  box[1] == '*'&& box[2] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("X");
		gotoxy(20,8);cprintf("X");
		gotoxy(30,8);cprintf("X");
	}
	if( box[3] == '*' &&  box[4] == '*'&& box[5] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(10,12);cprintf("X");
		gotoxy(20,12);cprintf("X");
		gotoxy(30,12);cprintf("X");
	}
	if( box[6] == '*' &&  box[7] == '*'&& box[8] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(10,16);cprintf("X");
		gotoxy(20,16);cprintf("X");
		gotoxy(30,16);cprintf("X");
	}
//==============HORIJONTLE=======================//

	if( box[0] == '*' &&  box[3] == '*'&& box[6] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("X");
		gotoxy(10,12);cprintf("X");
		gotoxy(10,16);cprintf("X");
	}
	if( box[1] == '*' &&  box[4] == '*'&& box[7] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(20,8);cprintf("X");
		gotoxy(20,12);cprintf("X");
		gotoxy(20,16);cprintf("X");
	}
	if( box[8] == '*' &&  box[5] == '*'&& box[2] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(30,8);cprintf("X");
		gotoxy(30,12);cprintf("X");
		gotoxy(30,16);cprintf("X");
	}
///=============Hozontal And Verticle-----=====

	if( box[0] == '*' &&  box[4] == '*'&& box[8] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("X");
		gotoxy(20,12);cprintf("X");
		gotoxy(30,16);cprintf("X");
	}
	if( box[2] == '*' &&  box[4] == '*'&& box[6] == '*')
	{
		win = 1;
		textcolor(GREEN);
		gotoxy(30,8);cprintf("X");
		gotoxy(20,12);cprintf("X");
		gotoxy(10,16);cprintf("X");
	}
}
void O_out()
{
//=====================VERTICLE=================

	if( box0[0] == '@' &&  box0[1] == '@'&& box0[2] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("O");
		gotoxy(20,8);cprintf("O");
		gotoxy(30,8);cprintf("O");
	}
	if( box0[3] == '@' &&  box0[4] == '@'&& box0[5] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(10,12);cprintf("O");
		gotoxy(20,12);cprintf("O");
		gotoxy(30,12);cprintf("O");
	}
	if( box0[6] == '@' &&  box0[7] == '@'&& box0[8] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(10,16);cprintf("O");
		gotoxy(20,16);cprintf("O");
		gotoxy(30,16);cprintf("O");
	}
//==============HORIJONTLE=======================//

	if( box0[0] == '@' &&  box0[3] == '@'&& box0[6] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("O");
		gotoxy(10,12);cprintf("O");
		gotoxy(10,16);cprintf("O");
	}
	if( box0[1] == '@' &&  box0[4] == '@'&& box0[7] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(20,8);cprintf("O");
		gotoxy(20,12);cprintf("O");
		gotoxy(20,16);cprintf("O");
	}
	if( box0[8] == '@' &&  box0[5] == '@'&& box0[2] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(30,8);cprintf("O");
		gotoxy(30,12);cprintf("O");
		gotoxy(30,16);cprintf("O");
	}
///=============Hozontal And Verticle-----=====

	if( box0[0] == '@' &&  box0[4] == '@'&& box0[8] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(10,8);cprintf("O");
		gotoxy(20,12);cprintf("O");
		gotoxy(30,16);cprintf("O");
	}
	if( box0[2] == '@' &&  box0[4] == '@'&& box0[6] == '@')
	{
		winO = 1;
		textcolor(GREEN);
		gotoxy(30,8);cprintf("O");
		gotoxy(20,12);cprintf("O");
		gotoxy(10,16);cprintf("O");
	}
}
void Player1()
{
	textcolor(WHITE);gotoxy(60,7);cprintf("Pleyer1:-");
	ch = getch();
	ProcessX();
}
void Player2()
{
	textcolor(WHITE);gotoxy(60,14);cprintf("Pleyer2:-");
	Och = getch();
	ProcessO();
}
void Start()
{
	clrscr();
	win = 0;
	winO =0;
	textcolor(WHITE);
	for(i=0; i<10; i++)
	{
		box[i] = '0/';
		box0[i] = '0/';
	}
	for(i=0; i<28; i++)
	{
		gotoxy(7+i,10);cprintf("-");
		gotoxy(7+i,14);cprintf("-");
	}
	for(i=0; i<13; i++)
	{
		gotoxy(15,7+i);cprintf("|");
		gotoxy(25,7+i);cprintf("|");
	}
	gotoxy(10,8);cprintf("1");
	gotoxy(20,8);cprintf("2");
	gotoxy(30,8);cprintf("3");

	gotoxy(10,12);cprintf("4");
	gotoxy(20,12);cprintf("5");
	gotoxy(30,12);cprintf("6");

	gotoxy(10,16);cprintf("7");
	gotoxy(20,16);cprintf("8");
	gotoxy(30,16);cprintf("9");

	while(ch!='#'|| ch!='#')
	{
		Player1();
		if(win!=0 || winO!=0)
		{
			gotoxy(60,8);cprintf("Press Enter......");
			getch();
			Start();
		}
		Player2();
		if(win!=0 || winO!=0)
		{
			gotoxy(60,15);cprintf("Press Enter......");
			getch();
			Start();
		}
	}
}
void random_num()
{
	printf("\n%d",r+i);
		randomize();
		printf("Random number in the 0-99 range: %d\n", random (100));
}
void main()
{
	int r=0;
	clrscr();
	//Grafics();
	//Start();

	for(i=0; i<10; i++)
	{
		random_num();
	}

	getch();
}