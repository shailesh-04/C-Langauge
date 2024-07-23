#include<stdio.h>
#include<graphics.h>
void main()
{
		 int gd=DETECT,gm;
 clrscr();
		 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
		 setcolor(RED);     circle(200,100,40);
		 setcolor(YELLOW);  circle(200,100,10);
		 setcolor(RED);     circle(300,100,40);
		 setcolor(YELLOW);  circle(300,100,10);
		 setcolor(GREEN);   circle(250,170,10);
		 setcolor(MAGENTA); line(200,230,300,230);
 getch();
 closegraph();
}