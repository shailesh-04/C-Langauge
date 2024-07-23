// Applaing Selsort On String
#include<stdio.h>
#include<conio.h>
#include<string.h>

int Num,i;
char Array[15][45];

void Sorting()
{
	int j;
	char Temp[45];

	for(i=0; i<Num-1; i++)
		{
			for(j=i+1; j<Num; j++)
				{
					if( strcmp( Array[i] , Array[j] ) > 0)
						{
							strcpy( Temp , Array[i] );
							strcpy( Array[i] , Array[j] );
							strcpy( Array[j] , Temp );
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
	printf("Enter %d Strings:- \n\n");
	for(i=0; i<Num; i++)
		{
			fflush(stdin);
			gets(Array[i]);
		}

	Sorting();

	clrscr();
	printf("Sorted Data Are:- \n\n");
	for(i=0; i<Num; i++)
		{
			printf("%s \n",Array[i]);
		}
 getch();
}