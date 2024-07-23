#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int No,No1,Sum,Temp;
 clrscr();
	//Geting Old Sum
	fp=fopen("Sum.txt","r");
	fscanf(fp,"%d",&Temp);
	fclose(fp);

	//Printing Old Sum
	printf("Old Sum Is :- %d",Temp);

	//Geting Num1 From User
	printf("\n\nEnter a Number:- ");
	scanf("%d",&No);

	//Geting Num2 From The User
	printf("Enter a Number:- ");
	scanf("%d",&No1);

	//Calculating Sum
	Sum=No+No1;

	//Printing New Sum
	printf("\nSum Is:- %d",Sum);

	//Storeing New Sum In "Sum.txt" File
	fp=fopen("Sum.txt","w");
	fprintf(fp,"%d",Sum);
	fclose(fp);
 getch();
}