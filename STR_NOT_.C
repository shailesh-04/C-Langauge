#include<stdio.h>
#include<conio.h> 
void smain()
{
	char str[50],i;
	int lenth=0;
	clrscr();
	printf("\t\t\t Find lenth WHithout Use Str Fuction");
	printf("\n\n Enter Any Sringg:-");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		lenth++;
	}
	printf("\n Your Enterd  Sring Of Lenth = %d",lenth);
	getch();
}
void strcpy()
{
	char s1[50],s2[50];
	int i;
	clrscr();
	printf("\t\t\t Copy String Whithout Fuction ");
	printf("\n Enter Any Sring :-");
	gets(s1);
	for(i=0;s1[i]!='\0'; i++)
	{
		s2[i]=s1[i];
	}
	puts(s2);
	getch();
}
void strcat()
{
	char s1[50],s2[50];
	int i;
	clrscr();
	printf("\t\t\t Cancat String Whithout Fuction ");
	printf("\n Enter Any Sring :-");
	gets(s1);
	printf("\n Enter Any Sring:-");
	gets(s2);
	strcat(s1,s2);

	puts(s1);

	getch();
}
void main()
{
	char ch;
	while(1)
	{
		switch(ch)
		{
				clrscr();
			printf("\n\n1 : lenth sring");
			printf("\n1 : copy sring");

			printf("\n\n Enter Your Chose");
			ch=getch();
			case '0':exit();
			case '1':strlen(); 	getch(); break;
			case '2':strcpy(); 	getch(); break;
			default: printf("\n Enter Any Choise");break;



		}
	}


}





