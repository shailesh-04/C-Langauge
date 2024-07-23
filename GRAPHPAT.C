#include<conio.h>
#include<graphics.h>
void main()
{
	int Gd=0,Gm,i;
	char Choice;

	do{
		closegraph();
		clrscr();
		printf("#   Exit\n");
		printf("@)  Pattern1\n");
		printf("0)  Pattern2\n");
		printf("1)  Pattern3\n");
		printf("2)  Pattern4\n");
		printf("3)  Pattern5\n");
		printf("4)  Pattern6\n");
		printf("5)  Pattern7\n");
		printf("6)  Pattern8\n");
		printf("7)  Pattern9\n");
		printf("8) Pattern10\n");
		printf("9) Pattern11\n");

		printf("\nEnter Your Choice:- ");
		Choice=getch();

		initgraph(&Gd,&Gm,"C:\\TC\\BGI");

		switch(Choice)
			{
				case '#': exit(0);
				case '@' :
						setfillstyle(WIDE_DOT_FILL,YELLOW);
						circle(325,240,23);
						floodfill(326,246,WHITE);

						for(i=0; i<115; i++)
							{
								arc(325-i,240,90,180,10+i);
								arc(325,240-i,0,90,10+i);
								arc(325,240+i,180,-90,10+i);
								arc(325+i,240,-90,0,10+i);
								setcolor(i/10);
								delay(50);
							}
				getch();
				break;

				case '0' :
						for(i=0; i<115; i++)
							{
								arc(325-i,240,90+i,180,10+i);
								arc(325,240-i,0+i,90,10+i);
								arc(325,240+i,180+i,-90,10+i);
								arc(325+i,240,-90+i,0,10+i);
								setcolor(i/10);
								delay(50);
							}
				getch();
				break;

				case '1' :
						for(i=0; i<125; i++)
							{
								arc(325,240,90+i,180,10+i);
								arc(325,240,0+i,90,10+i);
								arc(325,240,180+i,-90,10+i);
								arc(325,240,-90+i,0,10+i);
								setcolor(i/10);
								delay(50);
							}
				getch();
				break;

				case '2' :
						for(i=0; i<125; i++)
							{
								arc(325+i,240,90+i,180,10+i);
								arc(325-i,240,0+i,90,10+i);
								arc(325+i,240,180+i,-90,10+i);
								arc(325-i,240,-90+i,0,10+i);
								setcolor(i/10);
								delay(50);
							}
				getch();
				break;

				case '3' :
						for(i=0; i<125; i++)
							{
								arc(325-i,240,90+i,180,10+i);
								arc(325+i,240,0+i,90,10+i);
								arc(325-i,240,180+i,-90,10+i);
								arc(325+i,240,-90+i,0,10+i);
								setcolor(i/10);
								delay(50);
							}
				getch();
				break;

				case '4' :
						for(i=0; i<150; i++)
							{
								arc(325+i,240,90,180,10+i);
								arc(325-i,240,0,90,10+i);
								arc(325+i,240,180,-90,10+i);
								arc(325-i,240,-90,0,10+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;

				case '5' :
						for(i=0; i<150; i++)
							{
								arc(325-i,240,90,180,10+i);
								arc(325+i,240,0,90,10+i);
								arc(325+i,240,180,-90,10+i);
								arc(325-i,240,-90,0,10+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;

				case '6' :
						for(i=0; i<210; i++)
							{
								arc(325,240,90-i+40,180-i,10+i);
								arc(325,240,0-i+40,90-i,10+i);
								arc(325,240,180-i+40,-90-i,10+i);
								arc(325,240,-90-i+40,0-i,10+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;

				case '7' :
						for(i=0; i<170; i++)
							{
								arc(325+i,240,90-i,180-i-20,0+i);
								arc(325-i,240,0-i,90-i-20,0+i);
								arc(325+i,240,180-i,-90-i-20,0+i);
								arc(325-i,240,-90-i,0-i-20,0+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;

				case '8':
						for(i=0; i<170; i++)
							{
								arc(325-i,240,90-i,180-i-20,0+i);
								arc(325+i,240,0-i,90-i-20,0+i);
								arc(325+i,240,180-i,-90-i-20,0+i);
								arc(325-i,240,-90-i,0-i-20,0+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;

				case '9':
						for(i=0; i<130; i++)
							{
								arc(325+i,240-i,90-i,180-i-20,0+i);
								arc(325-i,240+i,0+i,90+i-20,0+i);
								arc(325+i,240+i,180+i,-90+i-20,0+i);
								arc(325-i,240-i,-90-i,0-i-20,0+i);
								setcolor(i/20);
								delay(50);
							}
				getch();
				break;
				default: printf("\n\nInvalid Choice\n");
							printf("Press Any Key...");
							getch();
		}
	}while(1);
}