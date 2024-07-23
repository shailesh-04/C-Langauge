/*
|-------------------------------: Snake Game :-------------------------------|
                 |                                         |
					  |	   Developer Name :- Shiyal Pradip    |
         		  |	   Starting Date  :- 23 Jul 2022      |
         		  |	   Ending Date    :- 24 Jul 2022      |
                 |                                         |
                 |-----------------------------------------|

         |----------------------: How To Play :----------------------|
         |                                                           |
         |				      Press [ w ]  For Move Up                  |
         |                 Press [ a ]  For Move Left                |
         |                 Press [ s ]  For Move Down                |
         |                 Press [ d ]  For Move Right               |
         |                                                           |
         |                   Press [ Space ] For EXIT                |
         |-----------------------------------------------------------|
|----------------------------------------------------------------------------|
*/

// Predefine Header Files
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

//This Header Files Are Made By Coder
#include"Function.h"

void main()
{
	if(Game_Started==0)
		{
			Game_Start();
		}

	fp=fopen("Score.txt","r");
	fscanf(fp,"%ld",&Heighest); // Geting Heigh Score In To The File
	fclose(fp);

	//Calling Main Functions
	Red_Partition();
	Blue_Partition();
	Cyan_Partition();
	Black_Partition();
	Player();
	Fruit_Position();
	Control();
}

//This Function Shows Welcome Window
void Game_Start()
{
	Game_Started=1;

	window(1,1,80,25);
	textbackground(BLUE);
	clrscr();

	window(10,6,70,20);
	textbackground(BLACK);
	clrscr();

	textcolor(RED);
	gotoxy(23,2); cprintf("Welcome To Our Game");
	gotoxy(27,5); cprintf("Developed By");

	textcolor(YELLOW);
	gotoxy(5,2);  cprintf("----------------:");
	gotoxy(43,2); cprintf(":---------------");

	gotoxy(15,5); cprintf("----------:");
	gotoxy(40,5); cprintf(":----------");

	textcolor(YELLOW);
	gotoxy(27,7); cprintf("Shiyal Pradip");

	textcolor(YELLOW+BLINK);
	gotoxy(22,10); cprintf("Press Any Key For Play");

	//If The User Wants To EXIT From The Welcome Window
	Choice=getch();

	if(Choice=='#') exit(0);

	textcolor(YELLOW);
	gotoxy(5,12); cprintf("Loading...");

	textcolor(WHITE);
	gotoxy(5,13);

	// 220 Is a ASCII Value Of "Ü" Symbol
	for(i=0; i<53; i++) cprintf("%c",220);

	textcolor(RED);
	gotoxy(5,13);
	for(i=0; i<53; i++)
		{
			cprintf("%c",220);
			delay(160);
		}
}

//This Function Shows All Controls Of The Game
void Red_Partition()
{
	window(61,1,80,10);
	textbackground(RED);
	clrscr();

	textcolor(WHITE); gotoxy(2,2); cprintf("----:Controls:----");

	textcolor(BLUE);
	gotoxy(3,4); cprintf("W");
	gotoxy(3,5); cprintf("A");
	gotoxy(3,6); cprintf("S");
	gotoxy(3,7); cprintf("D");
	gotoxy(3,9); cprintf("Space");

	textcolor(YELLOW);
	gotoxy(5,4); cprintf(":- For Go Up");
	gotoxy(5,5); cprintf(":- For Go Left");
	gotoxy(5,6); cprintf(":- For Go Down");
	gotoxy(5,7); cprintf(":- For Go Right");
	gotoxy(8,9); cprintf(":- For Exit");
}

// This Function Shows Score,Heigh Score,Hearts
void Blue_Partition()
{
	window(61,11,80,17);
	textbackground(BLUE);
	clrscr();

	textcolor(WHITE);
	gotoxy(2,2); cprintf("------:Score:-----");

	textcolor(YELLOW);
	gotoxy(2,4); cprintf("Fruits :- ");
	gotoxy(2,5); cprintf("Highest:- ");

	gotoxy(2,6);
	if(Heart==3) // Value Of Heart = 3
		{
			cprintf("Life   :- %c %c %c",3,3,3);//3 Is a ASCII Value Of Heart
		}
	else if(Heart==2)// Value Of Heart = 2
		{
			cprintf("Life   :- %c %c",3,3);
		}
	else if(Heart==1) // Value Of Heart = 1
		{
			cprintf("Life   :- %c",3);
		}
	else // Value Of Heart = 0
		{
			textcolor(RED+BLINK);
			gotoxy(2,7); cprintf("No Hearts");
		}

	textcolor(WHITE);
	gotoxy(12,4); cprintf("%ld",Score);   // Showing Score
	gotoxy(12,5); cprintf("%ld",Heighest);// Showing Heigh Score
}

//This Function Shows Status Of Game (Playing Or Game Over)
void Cyan_Partition()
{
	// Notification Window
	window(61,18,80,25);
	textbackground(CYAN);
	clrscr();

	textcolor(RED);
	gotoxy(2,2); cprintf("-----:Status:-----");

	if(Game_Started==1)
		{
			textcolor(WHITE);
			gotoxy(8,4); cprintf("Playing");
		}
	else if(Heart== -1)
		{
			textcolor(YELLOW);
			gotoxy(7,4); cprintf("Game Over");
		}
}

//This Function Clears The Play Ground Window
void Black_Partition()
{
	window(1,1,60,25);
	textbackground(BLACK);
	clrscr();

	Border();
}

//This Function Make Border Of Ground
void Border()
{
	for(i=1; i<=Height; i++)
		{
			for(j=1; j<=Width; j++)
				{
					if(i==1 || i==Height || j==1 || j==Width)
						{
							printf("%c",219);// 219 Is ASCII Value Of "ßß" Symbol
						}
					else
						{
							printf(" ");
						}
				}
			printf("\n");
		}
}

//This Function Generates Player In To The Output
void Player()
{
	textcolor(WHITE);
	gotoxy(X,Y); cprintf("");
}

//This Function Move The Player
void Control()
{
	while(1)
		{
			Choice=getch(); // Geting Choice
			switch(Choice)
				{
					case ' ': if(Score>Heighest)
									{
										fp=fopen("Score.txt","w");
										fprintf(fp,"%ld",Score);
										fclose(fp);
									}

								 exit(0); // Press Space For Exit

					//If User Press Capital W,A,S,D Or Small w,a,s,d All Are Valid
					case 'W':
					case 'w': Move_Up();    break;

					case 'A':
					case 'a': Move_Left();  break;

					case 'S':
					case 's': Move_Down();  break;

					case 'D':
					case 'd': Move_Right(); break;
				}
		}
}

// This Function Moving The Player To Up Side
void Move_Up()
{
	do{
		if(Y!=2)
			{
				Y--;
				Black_Partition();
				Player();
				Fruit_Position(); // Function Avilable In "Fruit_Po.h" Header File
			}
		else if(Y==2) // This Condition Will True When Snake Hits Border
			{
				Lost_Hearts();
			}

		Conditions();
		delay(100);

	}while(!kbhit());
}

// This Function Moving The Player To Left Side
void Move_Left()
{
	do{
		if(X!=2)
			{
				X--;
				Black_Partition();
				Player();
				Fruit_Position();
			}
		else if(X==2)// This Condition Will True When Snake Hits Border
			{
				Lost_Hearts();
			}

		Conditions();
		delay(80);

	}while(!kbhit());
}

// This Function Moving The Player To Down Side
void Move_Down()
{
	do{
		if(Y!=23)
			{
				Y++;
				Black_Partition();
				Player();
				Fruit_Position();
			}
		else if(Y==23) // This Condition Will True When Snake Hits Border
			{
				Lost_Hearts();
			}

		Conditions();
		delay(100);

	}while(!kbhit());
}

// This Function Moving The Player To Right Side
void Move_Right()
{
	do{
		if(X!=59)
			{
				X++;
				Black_Partition();
				Player();
				Fruit_Position();
			}
		else if(X==59) // This Condition Will True When Snake Hits Border
			{
				Lost_Hearts();
			}

		Conditions();
		delay(80);

	}while(!kbhit());
}

//This Function Shows The How Many Hearts Available
void Lost_Hearts()
{
	Heart--;

	if(Heart!= -1)
		{
			Blue_Partition();

			window(1,1,60,25);
			textbackground(BLACK);
			clrscr();

			Border();

			textcolor(RED);
			gotoxy(27,7);  cprintf("Warning");

			textcolor(GREEN);
			gotoxy(13,8);  cprintf("---------------------------------");
			gotoxy(13,15); cprintf("---------------------------------");

			textcolor(YELLOW);
			gotoxy(20,9);  cprintf("You Have Lost 1 Heart");
			gotoxy(25,10); cprintf("And Now You");
			gotoxy(22,11); cprintf("Only Have %d Heart.",Heart);
			gotoxy(23,14); cprintf("See Score Board");

			textcolor(CYAN+BLINK);
			gotoxy(18,17); cprintf("Press Any Key For Continue");

			getch();
			delay(500);
			main();
		}
	else
		{
			// Reset The All Values When Game Is Over
			Game_Started=0;
			Cyan_Partition();
			Heart=3;  // Reset The Value Of Heart
			Game_Over();
		}
}

// This Function Shows GAME OVER Window
void Game_Over()
{
	if(Score>Heighest) // Storing Heigh Score In To The "Score.txt" File
		{
			fp=fopen("Score.txt","w");
			fprintf(fp,"%ld",Score);
			fclose(fp);
		}

	window(1,1,60,25);
	textbackground(BLACK);
	clrscr();

	Border();

	textcolor(RED);
	gotoxy(25,4);  cprintf("Game Status");
	gotoxy(26,10); cprintf("Your Score");
	gotoxy(27,16); cprintf("Choices");

	textcolor(GREEN);
	gotoxy(16,5);  cprintf("----------------------------");
	gotoxy(18,11); cprintf("------------------------");
	gotoxy(15,17); cprintf("--------------------------------");

	textcolor(YELLOW+BLINK);
	gotoxy(26,6);  cprintf("Game Over");

	textcolor(YELLOW);
	gotoxy(30,12); cprintf("%ld",Score);
	gotoxy(20,18); cprintf("Press 1 For Play Again");
	gotoxy(23,20); cprintf("Press 2 For Exit");

	Choice=getch(); // Geting Choice

	switch(Choice)
		{
			case '1': Score=0; Game_Started=1; main();break;
			case '2': exit(0);
			default: Game_Over();
		}
}

void Position_Change()
{
	Black_Partition();
	Player();
	Fruit++;
	Fruit_Position();
	Score++;
	Blue_Partition();
}

void Fruit_Position()
{
	textcolor(YELLOW);
	switch(Fruit)
		{
			Label:
			case 0 : gotoxy(52,3);  cprintf("%c",5); break;
			case 1 : gotoxy(30,7);  cprintf("%c",5); break;
			case 2 : gotoxy(3,14);  cprintf("%c",5); break;
			case 3 : gotoxy(10,2);  cprintf("%c",5); break;
			case 4 : gotoxy(15,17); cprintf("%c",5); break;
			case 5 : gotoxy(40,20); cprintf("%c",5); break;
			case 6 : gotoxy(17,10); cprintf("%c",5); break;
			case 7 : gotoxy(40,13); cprintf("%c",5); break;
			case 8 : gotoxy(30,16); cprintf("%c",5); break;
			case 9 : gotoxy(52,15); cprintf("%c",5); break;
			case 10: gotoxy(20,14); cprintf("%c",5); break;
			case 11: Fruit=0; goto Label;
		}
}

void Conditions()
{
	if(X==52 && Y==3) Position_Change();
	else if(X==30 && Y==7)  Position_Change();
	else if(X==3  && Y==14) Position_Change();
	else if(X==10 && Y==2)  Position_Change();
	else if(X==15 && Y==17) Position_Change();
	else if(X==40 && Y==20) Position_Change();
	else if(X==17 && Y==10) Position_Change();
	else if(X==40 && Y==13) Position_Change();
	else if(X==30 && Y==16) Position_Change();
	else if(X==52 && Y==15) Position_Change();
	else if(X==20 && Y==14) Position_Change();
}