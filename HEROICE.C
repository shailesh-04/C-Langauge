#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm;
	clrscr();
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");
	line(150,50,500,50);//top
	line(200,50,200,350);//left 1
	line(450,50,450,350);//right 1
	line(265,70,265,300);//left 4
	line(390,70,390,300);//right 4
	line(200,70,265,70 );// rhight 4 top
	line(390,70,450,70 );// left 4 top
	line(220,100,245,100);//R..2.t.
	line(220,100,220,330);//r.2.
	line(245,100,245,317);//r.3.
	line(408,100,408,317);//l.3.
	line(430,100,430,325);//l.2
	line(408,100,430,100); //l.t
	line(327,350,408,317);
	line(327,350,430,325);
	line(327,325,390,300);
	line(400,336,450,350);
	line(220,330,327,350);
	line(245,317,327,350);
	line(265,300,327,325);
	line(200,350,250,340);
	getch();
}