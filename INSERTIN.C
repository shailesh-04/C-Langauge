// Applaying Insertion Sort On Number
#include<stdio.h>
#include<conio.h>

int Num,i,j,Array[45],Temp;

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
	printf("How Many Elements:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Elements:- \n",Num);

	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);

			Sorting();
		}

	clrscr();

	printf("Sorted Data Are:- \n\n");

	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}