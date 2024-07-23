#include<stdio.h>
#include<conio.h>

int a[9],i,total=0;
float per;
char sub;

void result()
{
	clrscr();

	window(1,1,80,25);
	textbackground(WHITE);
	clrscr();

	window(20,2,55,24);
	textbackground(BLACK);
	clrscr();

	window(20,3,52,24);
	textbackground(YELLOW);
	clrscr();

	textcolor(RED);
	gotoxy(1,2); cprintf("\1GUJRAT SECONDRY & HIGHT SECONDRY EDUCATION,GADHINGAR");
	textcolor(WHITE);
	gotoxy(1,4); cprintf("_________________________________");
	gotoxy(1,6); cprintf("_________________________________");
	gotoxy(1,8); cprintf("_________________________________");
	gotoxy(1,9); cprintf("================================");

	textcolor(10);
	gotoxy(1,5); cprintf("NAME :- ");
	gotoxy(1,7); cprintf("ROLL NO.:-");
	textcolor(3);
	gotoxy(9,5); cprintf("MAKAVANA SHILESH A.");
	gotoxy(10,7); cprintf("c 9023183");

	textcolor(0);
	gotoxy(1,11); cprintf("%d|",a[0]);
	gotoxy(1,12); cprintf("%d|",a[1]);
	gotoxy(1,13); cprintf("%d|",a[2]);
	gotoxy(1,14); cprintf("%d|",a[3]);
	gotoxy(1,15); cprintf("%d|",a[4]);
	gotoxy(1,16); cprintf("%d|",total);
	gotoxy(1,17); cprintf("%f|",per);
	gotoxy(1,18); cprintf("%f|",per);

}

int main()
{
	int n;
	clrscr();
	textbackground(BLACK);
	for(i=0;i<5;i++)
	{       printf("\n Enter Subject Of Mark:-");
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	per=total/5;
	printf("\ntotal=%d ",total);
	printf("\n per= %f",per);
	getch();

	result();
}





