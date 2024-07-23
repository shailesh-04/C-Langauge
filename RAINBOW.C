#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm,R,i=0,C;
	int Choice;

	while(1){
		clrscr();
		printf("# For Exit\n");
		printf("0 For Half Rainbow\n");
		printf("1 For Full Rainbow\n");
		printf("2 For Endless Rainbow\n");

		printf("\nEnter Your Choice? ");
		Choice=getch();

		//initgraph(&Gd,&Gm,"C:\\TC\\BGI");
		initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

		switch(Choice)
			{
				case '#': exit(0);
				case '0':
					for(i=20; i<328; i++)
						{
							arc(320,370,0,180,i);
							delay(50);
							setcolor(i/20);
						}
					getch();
				break;

				case '1':
					for(i=20; i<220; i++)
						{
							arc(315,240,0,360,i);
							delay(40);
							setcolor(i/20);
						}
					getch();
				break;

				case '2':
					setcolor(WHITE);
					circle(305,240,220);

					while(!kbhit())
						{
							Label:
							if(i>=0 && i<220)
								{
									setcolor(i/20);
									circle(305,240,i);
									delay(30);
									i++;
								}
							else
								{
									i=0;
									while(i<220)
										{
											setcolor(i/30);
											circle(305,240,i);
											delay(30);
											i++;
										}

									if(i<=220)
										{
											i=0;
											while(i<220)
												{
													setcolor(i/40);
													circle(305,240,i);
													delay(30);
													i++;
												}
										}

									if(i>=220)
										{
											i=0;
											goto Label;
										}
								}
						}
					getch();
				break;
			}
		closegraph();
	}
}