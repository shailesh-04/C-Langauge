#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{

	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(i=0;i<600;i++)
	{
		delay(1);
		setcolor(i/10);
	 arc(i-0,i-10,100,i-10,i-100);
	}
getch();
}