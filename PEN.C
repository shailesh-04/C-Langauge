#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int Gd=0,Gm;
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");
	 setbkcolor(5);

//	rectangle(300,100,340,430);

	setfillstyle(1,RED);
	//line(300,100,320,30);
  //	line(320,30,340,100),
	floodfill(205,205,WHITE);
	//arc(320,220,0,180,100);
  ellipse(rand()%50,rand()%60,rand()%40,rand()%50,rand()%40,rand()%60);
  delay(10);

	getch();
}