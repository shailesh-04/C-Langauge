#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#include"VAR.h"
#include"Plear.c"
#include"token.c"
#include"desine.c"


void main()
{
	int gd = 0,gm =0;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	B[0].bT=B[1].bT = B[2].bT = B[3].bT = -1;

	Y[0].yT=Y[1].yT = Y[2].yT = Y[3].yT = -1;
	G[0].gT=G[1].gT = G[2].gT = G[3].gT = -1;
	R[0].rT=R[1].rT = R[2].rT = R[3].rT = -1;

	clrscr();

//===================================================//
  while(ch!='#')
	{

		Desine();
		Player1();

		//Desine();
		//Player2();

		//Desine();
		//Player3();

	  // Desine();
	  //Player4();
	}
//===================================================//
	getch();
	closegraph();
}