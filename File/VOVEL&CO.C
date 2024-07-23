#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str1[20];
	clrscr();
	printf("\n\n Enter Any String :-");
	gets(str1);
	for(i=0; str1[i]!=NULL; i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||
			str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		{
			printf("\n %c is voval",str1[i]);
		}
		else
		{
			printf("\n %c is constant ",str1[i]);
		}
	}
	getch();
}