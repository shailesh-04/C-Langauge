#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main(void)
{
	int Gd=0,Gm,i;
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");

	for(i=1; i<=25; i++)
	{
	 setcolor(rand()%10);
	 circle(rand()%600,rand()%500,rand()%100);

	 rectangle(rand()%600,rand()%500,rand()%600,rand()%500);
	 outtextxy(rand()%600,rand()%500,"shailesh");

	 delay(20);

	 }

 getch();
}

