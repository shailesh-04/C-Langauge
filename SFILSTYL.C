#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	  int Gd=0,Gm,i;
 clrscr();
	  initgraph(&Gd,&Gm,"C:\\TurboC3\\BGI");
	  for(i=0; i<19; i++)
		{
			setfillstyle(9,i);
			fillellipse(290,200,90,160);
			delay(1000);
		}
 closegraph();
}