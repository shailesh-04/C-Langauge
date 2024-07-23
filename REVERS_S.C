#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0;
	char s1[50],s2[50];
	clrscr();
	printf("\n\t\t\t Sring Reves Oder ");
	printf("\n Enter Any Sring:-");
	gets(s1);
	for(i=NULL; s1[i]!=0; i--)
	{
		s2[j] =s1[i];
		j++;
	}
	getch();
}