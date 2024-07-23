// Applaying Bobbal Sort On String
#include<stdio.h>
#include<string.h>
#include<conio.h>

int Num,i;
char Array[15][45];

void Sorting()
{
	int j;
	char Temp[45];

	for(i=0; i<Num; i++)
		{
			for(j=0; j<Num-i-1; j++)
				{
					if( strcmp( Array[j] , Array[j+1] ) > 0)
						{
							strcpy ( Temp , Array[j] );
							strcpy ( Array[j] , Array[j+1] );
							strcpy ( Array[j+1] , Temp );
						}
				}
		}
}

void main()
{
 clrscr();
	printf("How Many Strings:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Strings:- ",Num);

	for(i=0; i<Num; i++)
		{
			gets(Array[i]);
		}

	Sorting();

	for(i=0; i<Num; i++)
		{
			printf("%s \n",Array[i]);
		}
 getch();
}