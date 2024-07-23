// Applaing Selection Sort On Numbers
#include<stdio.h>
#include<conio.h>

int Num,i,Array[45];

void Sorting()
{
	int j,Temp;

	for(i=0; i<Num-1; i++)
		{
			for(j=i+1; j<Num; j++)
				{
					if( Array[i] > Array[j] )
						{
							Temp = Array[i];
							Array[i] = Array[j];
							Array[j] = Temp;
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
	printf("Enter %d Elements:- \n",Num);

	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);
		}

	Sorting();

	clrscr();
	printf("Sorted Data Are:- \n\n");

	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}