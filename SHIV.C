#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm;
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");

	arc(300,100,15,165,35);

	line(265,90,265,175);
	line(335,90,335,175);

	getch();
}