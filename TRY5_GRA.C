#include<conio.h>
#include<graphics.h>
void main(void)
{
	int Gd=0,Gm,i;
	initgraph(&Gd,&Gm,"c:\\TC\\BGI");

	rectangle(100,400,530,55);

	line(100,55,200,130);
	line(440,130,530,57);
	line(100,400,200,320);
	line(440,320,530,400);


	for(i=0;i<70;i++)
	{

		setcolor(10);
		circle(320,225,i-1);
	}
	for(i=0 ; i<=400; i++)
	{
		setcolor(3);
		rectangle(200,320,440,130);
	}

 getch();
}