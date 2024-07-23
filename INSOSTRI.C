// Applaying Insertion Sort On String
#include<stdio.h>
#include<conio.h>
#include<string.h>

int Num,i,j;
char Array[15][45],Temp[45];

void Sorting()
{
	strcpy(Temp,Array[i]);

	j=i-1;

	while(j>=0 && strcmp( Array[j] , Temp ) > 0)
		{
			strcpy( Array[j+1] , Array[j] );
			j--;
		}

	strcpy( Array[j+1] , Temp);
}

void main()
{
 clrscr();
	printf("How Many Strings:- ");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Strings:- \n",Num);

	for(i=0; i<Num; i++)
		{
			fflush(stdin);
			gets(Array[i]);

			Sorting();
		}

	clrscr();

	printf("Sorted Strings Are:- \n\n");
	for(i=0; i<Num; i++)
		{
			printf("%s \n",Array[i]);
		}
 getch();
}