// Applaying Bobal Sort On Character
#include<stdio.h>
#include<conio.h>

	int  Num,i;
	char Array[45];

void Sorting()
{
	int j;
	char Temp;
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
	printf("How Many Elements:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Elements:- ",Num);
	for(i=0; i<Num; i++)
		{
			fflush(stdin);
			scanf("%c",&Array[i]);
		}

	printf("\n\n");

	Sorting();

	for(i=0; i<Num; i++)
		{
			printf("%c ",Array[i]);
		}
 getch();
}