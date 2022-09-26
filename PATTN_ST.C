/*   |                           output                          |
	  |-----------------------------------------------------------|
	  |*                                                          |
	  |* *                                                        |
	  |* * *                                                      |
	  |* * * *                                                    |
	  |* * * * *                                                  |
	  |* * * * * *                                                |																	  |
	  |-----------------------------------------------------------|
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row;
	clrscr();

	printf("\n\nEnter Pattn of Last Row And Firt Colom :-");
	scanf("%d",&row);

	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}



 getch();
}