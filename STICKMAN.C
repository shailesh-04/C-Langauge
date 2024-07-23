#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	  int Gd=0,Gm;
 clrscr();
	  initgraph(&Gd,&Gm,"C:\\TC\\BGI");
	  circle(300,100,10);
	  line(300,113,300,139);
	  line(280,120,300,110);
	  line(300,110,320,120);
	  line(290,164,299,140);
	  line(309,164,300,140);
 getch();
}