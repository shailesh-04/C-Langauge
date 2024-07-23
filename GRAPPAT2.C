#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm,i;
	char Choice;

	do{
		initgraph(&Gd,&Gm,"C:\\TC\\BGI");

		setfillstyle(WIDE_DOT_FILL,YELLOW);
		circle(325,240,23);
		floodfill(326,246,WHITE);

		//Pattern1
		outtext("1");
		for(i=0; i<115; i++)
			{
				arc(325-i,240,90,180,10+i);
				arc(325,240-i,0,90,10+i);
				arc(325,240+i,180,-90,10+i);
				arc(325+i,240,-90,0,10+i);
				setcolor(i/10);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern2
		 outtext("2");
		 for(i=0; i<115; i++)
			 {
				 arc(325-i,240,90+i,180,10+i);
				 arc(325,240-i,0+i,90,10+i);
				 arc(325,240+i,180+i,-90,10+i);
				 arc(325+i,240,-90+i,0,10+i);
				 setcolor(i/10);
				 delay(50);
			 }
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern3
		 outtext("3");
		 for(i=0; i<125; i++)
			{
				arc(325,240,90+i,180,10+i);
				arc(325,240,0+i,90,10+i);
				arc(325,240,180+i,-90,10+i);
				arc(325,240,-90+i,0,10+i);
				setcolor(i/10);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern4
		 outtext("4");
		 for(i=0; i<125; i++)
			{
				arc(325+i,240,90+i,180,10+i);
				arc(325-i,240,0+i,90,10+i);
				arc(325+i,240,180+i,-90,10+i);
				arc(325-i,240,-90+i,0,10+i);
				setcolor(i/10);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern5
		 outtext("5");
		 for(i=0; i<125; i++)
			{
				arc(325-i,240,90+i,180,10+i);
				arc(325+i,240,0+i,90,10+i);
				arc(325-i,240,180+i,-90,10+i);
				arc(325+i,240,-90+i,0,10+i);
				setcolor(i/10);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern6
		 outtext("6");
		 for(i=0; i<150; i++)
			{
				arc(325+i,240,90,180,10+i);
				arc(325-i,240,0,90,10+i);
				arc(325+i,240,180,-90,10+i);
				arc(325-i,240,-90,0,10+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern7
		 outtext("7");
		 for(i=0; i<150; i++)
			{
				arc(325-i,240,90,180,10+i);
				arc(325+i,240,0,90,10+i);
				arc(325+i,240,180,-90,10+i);
				arc(325-i,240,-90,0,10+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern8
		 outtext("8");
		 for(i=0; i<220; i++)
			{
				arc(325,240,90-i+40,180-i,10+i);
				arc(325,240,0-i+40,90-i,10+i);
				arc(325,240,180-i+40,-90-i,10+i);
				arc(325,240,-90-i+40,0-i,10+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern9
		 outtext("9");
		 for(i=0; i<155; i++)
			{
				arc(325+i,240,90-i,180-i-20,0+i);
				arc(325-i,240,0-i,90-i-20,0+i);
				arc(325+i,240,180-i,-90-i-20,0+i);
				arc(325-i,240,-90-i,0-i-20,0+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern10
		 outtext("10");
		 for(i=0; i<160; i++)
			{
				arc(325-i,240,90-i,180-i-20,0+i);
				arc(325+i,240,0-i,90-i-20,0+i);
				arc(325+i,240,180-i,-90-i-20,0+i);
				arc(325-i,240,-90-i,0-i-20,0+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();

		 initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		 //Pattern11
		 outtext("11");
		 for(i=0; i<130; i++)
			{
				arc(325+i,240-i,90-i,180-i-20,0+i);
				arc(325-i,240+i,0+i,90+i-20,0+i);
				arc(325+i,240+i,180+i,-90+i-20,0+i);
				arc(325-i,240-i,-90-i,0-i-20,0+i);
				setcolor(i/20);
				delay(50);
			}
		 Choice=getch(); if(Choice=='#') exit();
		 closegraph();
	}while(1);
}