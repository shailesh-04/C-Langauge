// Applaing Selection Sort On Charectears
#include<stdio.h>
#include<conio.h>
#include<string.h>

int  Num,i;
char Array[45];

void Sorting()
{
	int j,Temp;

	for(i=0; i<Num-1; i++)
		{
			for(j=i+1; j<Num; j++)
				{
					if(Array[i]>Array[j])
						{
							Temp=Array[i];
							Array[i]=Array[j];
							Array[j]=Temp;
						}
				}
		}
}

void main()
{

 clrscr();
	printf("How Many Charecters:- ");
	scanf("%d",&Num);

	clrscr();

	printf("Enter %d Charecters:- \n",Num);

	for(i=0; i<Num; i++)
		{
			fflush(stdin);
			scanf("%c",&Array[i]);
		}

	Sorting();

	clrscr();
	printf("Sorted Data Are:- \n\n");
	for(i=0; i<Num; i++)
		{
			printf("%c ",Array[i]);
		}
 getch();
}