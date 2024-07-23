#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50],str2[40];
	clrscr();

	puts("enter any string:-");
	gets(str);
	puts("enter any sring2:-");
	gets(str2);

 //1       	puts(strrev(str));

//2			strcpy(str2,str);

				strcat(str,str2);


	puts(str);


 getch();
}