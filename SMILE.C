#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm;

	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	ellipse(310,210,0,360,150,150); // Face
	ellipse(250,150,0,360,16,34); //Left Eye
	ellipse(360,150,0,360,16,34); //Right Eye
	circle(310,230,10); // Nose
	arc(312,270,180,0,30); // Smile

	getch();
	cleardevice();
	ellipse(310,210,0,360,150,150); // Face
	ellipse(250,150,0,360,16,34); //Left Eye
	ellipse(360,150,0,360,16,34); //Right Eye
	circle(310,230,10); // Nose
	arc(312,302,0,180,30); // Smile

 getch();
}
