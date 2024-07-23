#include<stdio.h>
#include<string.h>
#include<conio.h>
#define Enter 13
#define password1 "123"
void main()
{
	char name[50],password[50];
	int i;
 clrscr();
 //	printf("*******************************************************************************");
	gotoxy(30,1);printf("Administetor");
	printf("\n------------------------------------------------------------------------------");

	printf("\n\t\tEnter Your Name:-");
	scanf("%s",&name);

	printf("\n\t\tEnter Password :-");

	for(i=0; i!='13'; i++)
		{
			fflush(stdin);
			password[i]=getch();
			if(password[i]==Enter)
				{
					password[i]=NULL;
					break;
				}
			printf("*");
		}

	if(strcmp(password1,password)==0)
		{
			printf("\n\n\t\t<<--OPEN LOCK-->>");
		}
	else
		{
			printf("\n\n\t\t<<--NOT OPEN LOCK-->>");
		}

	printf("\n-------------------------------------------------------------------------------");
	printf("\n\n\t====PASSWORD===== %s",password);
 getch();
}