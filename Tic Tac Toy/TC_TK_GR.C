#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include <stdlib.h>

#include "function.h"
#include "variable.h"

void ProcessX()
{
	switch(Xc)
	{
	  case '1': if(X[0] == '*' || O[0] == '@'){Player1();}
					else{ line(10+i,110,60+i,160);
							line(10+i,160,60+i,110);X[0] = '*'; } break;
	  case '2':	if(X[1] == '*' || O[1] == '@'){Player1();}
					else{line(100+i,110,150+i,160);
							line(100+i,160,150+i,110); X[1] = '*'; } break;
	  case '3':	if(X[2] == '*' || O[2] == '@'){Player1();}
					else{ line(180+i,110,230+i,160);
							line(180+i,160,230+i,110);X[2] = '*'; } break;
	  case '4':	if(X[3] == '*' || O[3] == '@'){Player1();}
					else{ line(10+i,200,60+i,250);
							line(10+i,250,60+i,200);X[3] = '*'; } break;
	  case '5':	if(X[4] == '*' || O[4] == '@'){Player1();}
					else{ line(100+i,200,150+i,250);
							line(100+i,250,150+i,200);X[4] = '*'; } break;
	  case '6':	if(X[5] == '*' || O[5] == '@'){Player1();}
					else{ line(180+i,200,230+i,250);
							line(180+i,250,230+i,200);X[5] = '*'; } break;
	  case '7':	if(X[6] == '*' || O[6] == '@'){Player1();}
					else{ line(10+i,290,60+i,340);
							line(10+i,340,60+i,290);X[6] = '*'; } break;
	  case '8':	if(X[7] == '*' || O[7] == '@'){Player1();}
					else{ line(100+i,290,150+i,340);
							line(100+i,340,150+i,290);X[7] = '*'; } break;
	  case '9':	if(X[8] == '*' || O[8] == '@'){Player1();}
					else{ line(180+i,290,230+i,340);
							line(180+i,340,230+i,290);X[8] = '*'; } break;
	}
	X_out();
}
void ProcessO()
{
	switch(Oc)
	{
	  case '1': if(X[0] == '*' || O[0] == '@'){Player2();}	else{ circle(30,130,30); O[0] = '@'; } break;
	  case '2':	if(X[1] == '*' || O[1] == '@'){Player2();}	else{ circle(123,130,30);O[1] = '@'; } break;
	  case '3':	if(X[2] == '*' || O[2] == '@'){Player2();}	else{ circle(220,130,30);O[2] = '@'; } break;
	  case '4':	if(X[3] == '*' || O[3] == '@'){Player2();}	else{ circle(30,225,30); O[3] = '@'; } break;
	  case '5':	if(X[4] == '*' || O[4] == '@'){Player2();}	else{ circle(123,225,30);O[4] = '@'; } break;
	  case '6':	if(X[5] == '*' || O[5] == '@'){Player2();}	else{ circle(220,225,30);O[5] = '@'; } break;
	  case '7':	if(X[6] == '*' || O[6] == '@'){Player2();}	else{ circle(30,325,30); O[6] = '@'; } break;
	  case '8':	if(X[7] == '*' || O[7] == '@'){Player2();}	else{ circle(123,325,30); O[7] = '@'; } break;
	  case '9':	if(X[8] == '*' || O[8] == '@'){Player2();}	else{ circle(220,325,30);O[8] = '@'; } break;
	}
	O_out();
}
void X_out()
{
//=====================VERTICLE=================

	if( X[0] == '*' &&  X[1] == '*'&& X[2] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
		 line(10+i,110,60+i,160);
		 line(10+i,160,60+i,110);// 1 Top Left

		 line(100+i,110,150+i,160);
		 line(100+i,160,150+i,110);// 2 Top Center

		 line(180+i,110,230+i,160);
		 line(180+i,160,230+i,110);// 3 Top Right
		}
	}
	if( X[3] == '*' &&  X[4] == '*'&& X[5] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
		 line(10+i,200,60+i,250);
		 line(10+i,250,60+i,200);// 4 Center Left

		 line(100+i,200,150+i,250);
		 line(100+i,250,150+i,200);// 5 Center Center

		 line(180+i,200,230+i,250);
		 line(180+i,250,230+i,200);// 6 Center Right
		 }

	}
	if( X[6] == '*' &&  X[7] == '*'&& X[8] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
		 line(10+i,290,60+i,340);
		 line(10+i,340,60+i,290);// 7 Bottom Left

		 line(100+i,290,150+i,340);
		 line(100+i,340,150+i,290);// 8 Bottom Center

		 line(180+i,290,230+i,340);
		 line(180+i,340,230+i,290);// 9 Bottom Right
		 }

	}
//==============HORIJONTLE=======================//

	if( X[0] == '*' &&  X[3] == '*'&& X[6] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
			line(10+i,110,60+i,160);
			line(10+i,160,60+i,110);// 1 Top Left

			line(10+i,200,60+i,250);
			line(10+i,250,60+i,200);// 4 Center Left
			 line(10+i,290,60+i,340);
			 line(10+i,340,60+i,290);// 7 Bottom Left
		}
	}
	if( X[1] == '*' &&  X[4] == '*'&& X[7] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
			line(100+i,110,150+i,160);
			line(100+i,160,150+i,110);// 2 Top Center
			line(100+i,200,150+i,250);
			line(100+i,250,150+i,200);// 5 Center Center
			line(100+i,290,150+i,340);
			line(100+i,340,150+i,290);// 8 Bottom Center
		 }
	}
	if( X[8] == '*' &&  X[5] == '*'&& X[2] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
			line(180+i,110,230+i,160);
			line(180+i,160,230+i,110);// 3 Top Right
			line(180+i,200,230+i,250);
			line(180+i,250,230+i,200);// 6 Center Right
			line(180+i,290,230+i,340);
			line(180+i,340,230+i,290);// 9 Bottom Right
		}

	}
///=============Hozontal And Verticle-----=====

	if( X[0] == '*' &&  X[4] == '*'&& X[8] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
			line(10+i,110,60+i,160);
			line(10+i,160,60+i,110);// 1 Top Left
			line(100+i,200,150+i,250);
			line(100+i,250,150+i,200);// 5 Center Center
			line(180+i,290,230+i,340);
			line(180+i,340,230+i,290);// 9 Bottom Right

		}

	}
	if( X[2] == '*' &&  X[4] == '*'&& X[6] == '*')
	{
		win = 1;
		for(i=1; i<=3; i++)
		{
			line(180+i,110,230+i,160);
			line(180+i,160,230+i,110);// 3 Top Right
			line(100+i,200,150+i,250);
			line(100+i,250,150+i,200);// 5 Center Center
			line(10+i,290,60+i,340);
			line(10+i,340,60+i,290);// 7 Bottom Left
		}
	}
}
void O_out()
{
//=====================VERTICLE=================

	if( O[0] == '@' &&  O[1] == '@'&& O[2] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--)
		{
			circle(30,130,30-i);  // 1 top left
			circle(123,130,30-i); // 2 Top Center
			circle(220,130,30-i); // 3 Top right
		}
	}
	if( O[3] == '@' &&  O[4] == '@'&& O[5] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(30,225,30-i);  // 4 center left
		circle(123,225,30-i); // 5 center center
		circle(220,225,30-i); // 6 center right
		}
	}
	if( O[6] == '@' &&  O[7] == '@'&& O[8] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(30,325,30-i);  // 7 bottom left
		circle(123,325,30-i); // 8 bottom center
		circle(220,325,30-i); // 9 bottom right
		}
	}
//==============HORIJONTLE=======================//

	if( O[0] == '@' &&  O[3] == '@'&& O[6] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(30,130,30-i);  // 1 top left
		circle(30,225,30-i);  // 4 center left
		circle(30,325,30-i);  // 7 bottom left
		}

	}
	if( O[1] == '@' &&  O[4] == '@'&& O[7] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(123,130,30-i); // 2 Top Center
		circle(123,225,30-i); // 5 center center
		circle(123,325,30-i); // 8 bottom center
		}
	}
	if( O[8] == '@' &&  O[5] == '@'&& O[2] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(220,130,30-i); // 3 Top right
		circle(220,225,30-i); // 6 center right
		circle(220,325,30-i); // 9 bottom right
		}

	}
///=============Hozontal And Verticle-----=====

	if( O[0] == '@' &&  O[4] == '@'&& O[8] == '@')
	{
		winO = 1;
		for(i=3; i>=1; i--){
		circle(30,130,30-i);  // 1 top left
		circle(123,225,30-i); // 5 center center
		circle(220,325,30-i); // 9 bottom right
		}

	}
	if( O[2] == '@' &&  O[4] == '@'&& O[6] == '@')
	{
		for(i=3; i>=1; i--){
		winO = 1;
		setcolor(RED);
		circle(220,130,30-i); // 3 Top right
		circle(123,225,30-i); // 5 center center
		circle(30,325,30-i);  // 7 bottom left
		}

	}
}
void Player1()
{
	setcolor(2);
	rectangle(420,100,600,150);
	settextstyle(1,0,3);
	outtextxy(460,110, "PLEYER1..");
	Xc = getch();
	if(Xc == '#')exit(0);
	ProcessX();
	setcolor(0);
	rectangle(420,100,600,150);
	settextstyle(1,0,3);
	outtextxy(460,110, "PLEYER1");
}
void Player2()
{
	setcolor(2);
	rectangle(420,200,600,250);
	settextstyle(1,0,2);
	outtextxy(460,210, "PLEYER2...");
	Oc = getch();
	if(Oc == '#')exit(0);
	ProcessO();
	setcolor(0);
	rectangle(420,200,600,250);
	settextstyle(1,0,2);
	outtextxy(460,210, "PLEYER2");
}
void Start()
{
	clrscr();
	win = 0;
	winO =0;

	setfillstyle(SOLID_FILL,0);
	rectangle(0,0,640,480);
	floodfill(21,71,RED);
	settextstyle(0,0,3);
	setcolor(RED);
	outtextxy(200,6, "TIC TOK TOY");
	setcolor(WHITE);
	for(i=0; i<10; i++)
	{
		X[i] = '0/';
		O[i] = '0/';
	}

	for(i=1; i<=5; i++)
	{
		settextstyle(0,0,1);
		line(70+i,100,70+i,370);
		line(170+i,100,170+i,370);
		line(0,170+i,240,170+i);
		line(0,270+i,240,270+i);
	}
	outtextxy(30,130, "1");
	outtextxy(120,130, "2");
	outtextxy(210,130, "3");

	outtextxy(30,230, "4");
	outtextxy(120,220, "5");
	outtextxy(210,220, "6");

	outtextxy(30,310, "7");
	outtextxy(120,310, "8");
	outtextxy(210,310, "9");

	while(1)
	{
		Player1();
		if(win!=0 || winO!=0)
		{
			setcolor(7);
			setfillstyle(XHATCH_FILL,LIGHTBLUE);
			floodfill(1,1,RED);
			settextstyle(1,0,3);
			outtextxy(180,110, "Pleyer_1 Is Winner..");
			getch();
			Start();
		}
		Player2();
		if(win!=0 || winO!=0)
		{
			setcolor(7);
			setfillstyle(XHATCH_FILL,LIGHTBLUE);
			floodfill(1,1,RED);
			settextstyle(1,0,3);
			outtextxy(180,110, "Pleyer_2 Is Winner..");
			getch();
			Start();
		}
	}
}


void main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	clrscr();
	Start();

	getch();
}