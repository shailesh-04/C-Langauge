#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m[3][3],flag=1;
	clrscr();
	printf("\n\t\t\1 \2 IDINTIMATRIX \2 \1");
	printf("\n\n Enter Aliment 3 by 3\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		 scanf("%d",&m[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j) //digram eliment
			{
				if(m[i][j]!=1)
				{
					flag=0;
				}
			}
			else
			{
				if(m[i][j]!=0)
				{
					flag=0;
				}
			}
		}
	}
	if(flag==1)
	{
		printf("\n This is idintyi Matrix\n");
	}
	else
	{
		printf("\n This is Not Idinyt matrix\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf(" %d ",m[i][i]);
		}
		printf("\n");
	}

	getch();
}