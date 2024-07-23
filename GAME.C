#include<stdio.h>
#include<conio.h>
#include<dos.h>
	int i;
void black()
{
	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();


	textcolor(1); gotoxy(18,3);  cprintf("\1 \1 \1 SNACK GAME \1 \1 \1");

	window(5,5,55,20);
	textbackground(0);
	clrscr();
}
void control()
{
	window(60,1,80,9);
	textbackground(RED);        //control color
	clrscr();

	textcolor(13);    gotoxy(1,2); cprintf("_-_-_-CONTROL-_-_-_-");
	textcolor(YELLOW);gotoxy(4,4); cprintf("W-->");
							gotoxy(4,5); cprintf("A-->");
							gotoxy(4,6); cprintf("S-->");
							gotoxy(4,7); cprintf("D-->");
							gotoxy(5,9); cprintf("Space->");
	textcolor(GREEN); gotoxy(9,4); cprintf("For Up");
							gotoxy(9,5); cprintf("For Left");
							gotoxy(9,6); cprintf("For Down");
							gotoxy(9,7); cprintf("For Right");
							gotoxy(13,9); cprintf("Exit");

}
void score()
{
	window(60,10,80,17);
	textbackground(6);      //SCORE
	clrscr();
	textcolor(10); gotoxy(1,2); cprintf("-_-_-_-_Score_-_-_-_- ");
	textcolor(0);  gotoxy(2,4); cprintf("Your Score-->");
						gotoxy(2,5); cprintf("Highest----->");
						gotoxy(2,6); cprintf("Life-------->\2 \2 \2");

}
void status()
{
	window(60,18,80,25);         //status
	textbackground(3);
	clrscr();

}

void wcm()
{

	window(1,1,80,25);
	textbackground(BLUE);
	clrscr();

	window(10,6,70,20);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW); gotoxy(2,3); cprintf("--__--__--__-----:");
	textcolor(RED); gotoxy(22,3); cprintf("WallCome Our Game");
	textcolor(YELLOW); gotoxy(40,3); cprintf(":----__--__--__--__--");

	textcolor(YELLOW); gotoxy(10,7);  cprintf("_--__--__----:");
	textcolor(RED); gotoxy(25,7); cprintf("Devoliped By");
	textcolor(YELLOW); gotoxy(35,7); cprintf(":----__--__--_-_");

	textcolor(YELLOW); gotoxy(26,10); cprintf("SHAILESH");

	textcolor(WHITE+BLINK); gotoxy(45,13); cprintf("Press Enter Key");

	getch();

	 gotoxy(6,12); printf("Loding");
	textcolor(WHITE+BLINK); gotoxy(6,17); cprintf("...");

	window(10,18,70,18);
	textbackground(WHITE);
	clrscr();
	for(i=0; i<=59; i++)
	{
	textcolor(0); gotoxy(70,10);
	cprintf("\1");
	delay(70);
	}

 }


void main()
{
	wcm();
	black();
	control();
	score();
	status();

	getch();

}
