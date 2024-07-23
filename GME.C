#include<stdio.h>
#include<conio.h>
#include<dos.h>

void wcm()
{
	int i;
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
	textcolor(GREEN); gotoxy(70,10);
	cprintf("\1");
	delay(199);
	}
	wcm();

 getch();
 }

 void main()
 {
 wcm();
  }