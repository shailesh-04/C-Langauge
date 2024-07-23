#include<stdio.h>
#include<conio.h>
void main()
{
	 int age;
	 clrscr();
	 printf("age:-");
	 scanf("%d",&age);

	 if(age<=5)
	 {
		 printf("this childer");
	 }
	 else if(age<=15)
	 {
		printf("this school studrnt");
	 }
	 else
	 {
		 printf("this man");
	 }
	 getch();

}