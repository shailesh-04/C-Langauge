#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm;

	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	setfillstyle(SOLID_FILL,MAGENTA);
	circle(170,130,50);
	floodfill(171,133,WHITE);

	setfillstyle(SOLID_FILL,RED);
	line(430,100,501,200);
	line(430,100,360,200);
	line(360,200,500,200);
	floodfill(431,103,WHITE);

	setfillstyle(SOLID_FILL,BLUE);
	rectangle(100,300,200,400);
	floodfill(101,301,WHITE);

	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(400,350,0,360,90,40);
	floodfill(400,351,WHITE);

 getch();
}