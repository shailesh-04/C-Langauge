#include<stdio.h>
#include<conio.h>
char Ch;
void Top();
void Bottom();
void Left();
void Right();
void main()
	{
		clrscr();
		while(1)
			{
		Ch=getch();
			switch(Ch)
				{
					case 'w': Top();
					case 's': Bottom();
					case 'a': Left();
					case 'd': Right();
					case 'e': exit();
				}
			}
	}
void Top()
	{
	 gotoxy(3,9+1);cprintf("s");
	}
void Bottom()
	{
		gotoxy(3,9-1);cprintf("s");
	}
void Left()
	{
		gotoxy(3+1,9);cprintf("s");
	}
void Right()
	{
		gotoxy(3-1,9);cprintf("s");
	}

