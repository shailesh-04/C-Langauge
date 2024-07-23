#include<stdio.h>
#include<conio.h>
#define Enter 13
void main()
{
		char P[]={"88499"};
		int i;
		char password[45];
		clrscr();
		printf("enter password");
		scanf("%s",&password);
		for(i=0; i!='13'; i++)
		{
			password[i]=getch();
			if(password[i]==Enter)
			{  password[i]=NULL;
				break;
			}
			printf("*");
		}
		if(strcmp(password,P)==0)
		{
			printf("this passwoer raght");
		}
		printf("sssss");

getch();
}