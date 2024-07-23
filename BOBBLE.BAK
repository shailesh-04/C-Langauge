// Bobble Sort On Numbers
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Num,i,Array[45];

void Sorting()
{
	int j,Temp;

	for(i=0; i<Num; i++)
		{
			for(j=0; j<Num-i-1; j++)
				{
					if( Array[j] > Array[j+1] )
						{
							Temp = Array[j];
							Array[j] = Array[j+1];
							Array[j+1] = Temp;
						}
				}
		}
}

void main()
{
 clrscr();
	printf("How Many Numbers:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Numbers:- \n",Num);
	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);
		}

	Sorting();

	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}