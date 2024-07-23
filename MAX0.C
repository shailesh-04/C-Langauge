#include<stdio.h>
#include<conio.h>
void main()
{
	int i,max,num[5];
	clrscr();
	printf("\n\t\t \1\2 FIND MAX NUMBER IN FIVE VELUE \2\1");
	printf("\n Enter Five Diget Number:-");
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}        max=num[i];
	printf("\n%d",max);
	getch();
}