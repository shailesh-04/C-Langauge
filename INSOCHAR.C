// Applaing Insertion Sort On Charecter
#include<stdio.h>
#include<conio.h>

int Num,i,j;
char Array[45],Temp;

void Sorting()
{
	Temp=Array[i];

	j=i-1;

	while(j>=0 && Array[j]>Temp)
		{
			Array[j+1]=Array[j];
			j--;
		}
	Array[j+1]=Temp;
}

void main()
{
 clrscr();
	printf("How Many Charecters:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Charecters:- ",Num);

	for(i=0; i<Num; i++)
		{
			fflush(stdin);
			scanf("%c",&Array[i]);

			Sorting();
		}

	clrscr();
	printf("Sorted Data Are:- \n\n");

	for(i=0; i<Num; i++)
		{
			printf("%c ",Array[i]);
		}
 getch();
}