#include<stdio.h>
#include<conio.h>
void main()
{
	int Row,Col,i,j,Sa[15][3],X,k=0;

 clrscr();
	printf("Enter No Of Row:- ");
	scanf("%d",&Row);

	printf("Enter No Of Column:- ");
	scanf("%d",&Col);

	clrscr();
	for(i=0; i<Row; i++)
		{
			for(j=0; j<Col; j++)
				{
					scanf("%d",&X);

					if(X!=0)
						{
							Sa[k][0]=i;
							Sa[k][1]=j;
							Sa[k][2]=X;
							k++;
						}
				}
		}

	k=0;
	clrscr();
	for(i=0; i<Row; i++)
		{
			for(j=0; j<Col; j++)
				{
					if(Sa[k][0]==i && Sa[k][1]==j)
						{
							printf(" %d ",Sa[k][2]);
							k++;
						}
					else
						{
							printf(" 0 ");
						}
				}
			printf("\n");
		}

 getch();
}