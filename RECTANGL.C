#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	 int Gd=0,Gm;
 clrscr();
	 initgraph(&Gd,&Gm,"C:\\TurboC3\\BGI");
	 rectangle(100,20,300,400);
 getch();
}
