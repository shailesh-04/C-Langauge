#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	  int Gd=0,Gm;
 clrscr();
	  initgraph(&Gd,&Gm,"C:\\TurboC3\\BGI");
	  setbkcolor(RED);
	  circle(300,200,90);

 getch();
}