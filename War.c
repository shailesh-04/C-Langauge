#include<conio.h>
#include<graphics.h>
#include"Action.h"

void main()
{
	War_Start();
}

void War_Start(void)
{
	int Gd=0,Gm;
	char Choice1;

	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	cleardevice();

	// This Is Stick Man 1
	setcolor(CYAN);
	circle(30,100,10);// Head

	setcolor(MAGENTA);
	line(30,110,30,140);// Body

	setcolor(LIGHTBLUE);
	line(30,110,15,117);// Left Hand
	line(30,113,63,113);// Right Hand

	setcolor(LIGHTCYAN);
	line(30,140,20,163);// Left Lag
	line(30,140,40,163);// Right Lag

	setcolor(YELLOW);
	outtextxy(20,170,"You");

	setcolor(LIGHTRED);
	arc(44,113,-90,90,20);// Archery

	setcolor(WHITE);
	line(43,93,15,117);// Uper Rope
	line(43,133,15,117);// Lover Rope

	setcolor(RED);
	line(16,117,80,113);// Arrow

	setcolor(YELLOW);
	line(80,114,75,108);// Up Arrow
	line(80,114,75,120);// Down Arrow

	//This Is Stick Man 2
	setcolor(MAGENTA);
	circle(610,100,10);// Head

	setcolor(RED);
	line(610,110,610,140);// Body

	setcolor(LIGHTGREEN);
	line(610,113,598,117);// Left Hand
	line(610,113,622,117);// Right Hand

	setcolor(CYAN);
	line(610,140,600,155);// Left Lag
	line(610,140,622,155);// Right Lag

	setcolor(YELLOW);
	outtextxy(590,170,"Enemy");

	outtextxy(230,250,"Press 1 For Attack");
	outtextxy(238,270,"Press 2 For Exit");
	Choice1=getch();

	if(Choice1=='1')
		{
			You_Kill_Enemy();
		}
	else if(Choice1=='2')
		{
			exit(0);
		}
	else
		{
			Enemy_Kill_You();
		}
}
