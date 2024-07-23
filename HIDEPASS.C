 // C program to print *
// in place of characters
#include<stdio.h>
#include<conio.h>
int main(void)
{
	 char password[55];
	  int p=0;
	  clrscr();

	 printf("password:\n");
	 do{
		  password[p]=getch();
		  if(password[p]!='\r')
		  {
				printf("*");
		  }
		  p++;
	 }
	 while(password[p-1]!='\r');
	 password[p-1]='\0';
	 printf("\nYou have entered %s as password.",password);
	 getch();
}