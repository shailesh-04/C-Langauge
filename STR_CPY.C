//         COPY SRING WHITHOUT FUCTION
#include<stdio.h>
#include<conio.h>
void main()
{
	char str_1[50],str_2[50];
	int i;
	clrscr();
	textcolor(RED
	);cprintf("ID:-->  github.com/shailesh-makavana");
	printf("\n\t\t\t Copy String Whithout Fuction ");
	printf("\n\n Enter Any String Of s1:-");
	gets(str_1);// input sring

	for(i=0;str_1[i]!='\0'; i++)
	{
		str_2[i]=str_1[i];
	}
	printf("\n sring copy str_1 into str_2 :-");
	puts(str_2);   //output coped sring
	getch();
}//main
