#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include <stdlib.h>

#include "start.h"
#include "function.h"
#include "variable.h"

void Start()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	clrscr();
	win = 0;
	winO =0;
	textcolor(WHITE);
	for(i=0; i<10; i++)
	{
		X[i] = '0/';
		O[i] = '0/';
	}

	for(i=1; i<=5; i++)
	{
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
		if(win!=0 && winO!=0)
		{
			printf("\nPress Enter......");
			getch();
			Start();
		}
		Player2();
		if(win!=0 && winO!=0)
		{
			printf("\nPress Enter......");
			getch();
			Start();
		}
	}
}

