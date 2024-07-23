// Program To Calculate Sum Of Two Matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	long i,j;
	long M1[10][10],M2[10][10],M3[10][10];
 clrscr();

	printf("Enter 9 Elemebtes Of Matrix_1:- \n");
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					scanf("%ld",&M1[i][j]);
				}
		}

	printf("\nEnter 9 Elementes Of Matrix_2:- \n");
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					scanf("%ld",&M2[i][j]);
				}
		}

	printf("\nSum Of Two Matrix Is = \n\n");
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					M3[i][j] = M1[i][j] + M2[i][j];
					printf("%ld ",M3[i][j]);
				}
			printf("\n");
		}
 getch();
}