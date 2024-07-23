#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm;

	initgraph(&Gd,&Gm,"C:\\TC\\BGI");

	rectangle(10,130,130,200);
	rectangle(10,130,50,200);

	rectangle(20,160,40,200);
	rectangle(70,150,115,178);

	line(10,129,34,100);
	line(50,129,34,100);
	line(35,100,115,100);
	line(115,100,130,130);
 getch();
}