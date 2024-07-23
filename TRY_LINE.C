#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm;
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");

	 circle(300,100,50);
	line(300,150,300,250);
	line(200,200,300,150);
	line(300,150,400,200);
	line(200,350,300,250);
	line(300,250,400,350);


 getch();
}