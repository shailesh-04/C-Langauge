#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 int Gd=0,Gm;
void tector()
{
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");

	line(1,467,640,465);
	circle(95,370,95);
	circle(400,400,60);

	rectangle(0,200,200,300);
	rectangle(0,100,300,190);
	rectangle(210,330,500,200);
	arc(100,200,0,50,300);

}





void main(void)
{
		tector();

 //	initgraph(&Gd,&Gm,"c:\\TC\\BGI");


/*	setcolor(14);	circle(330,220,70);delay(100);
	setcolor(YELLOW); circle(257,215,70);delay(100);
	setcolor(YELLOW); circle(400,220,70); delay(100);
	setcolor(BLUE);circle(330,151,70);   delay(100);
	setcolor(BLUE); circle(330,290,70);  delay(100);
	setcolor(GREEN); circle(330,220,100);delay(100);
	setcolor(3); circle(330,220,200);    delay(100);

	setcolor(LIGHTRED);
	settextstyle(TRIPLEX_FONT,0,5);
	outtextxy(0,1,"thank you sir");


  */

 getch();
}

