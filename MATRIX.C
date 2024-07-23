#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,Array[3][3];
 clrscr();
	printf("Enter 9 Elements:- \n");
																			  4
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					scanf("%d",&Array[i][j]);
				}
		}

	printf("\n\n");
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					printf("%d ",Array[i][j]);
				}
			printf("\n");
		}
 getch();
}