#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Array[45],i,j,Temp;
 clrscr();
	printf("How Many Elements Do You Want To Enter:- \n");
	scanf("%d",&Num);

	clrscr();
	printf("Enter %d Elementd:- \n",Num);
	for(i=0; i<Num; i++)
		{
			scanf("%d",&Array[i]);
		}

	for(i=0; i<Num-1; i++)
		{
			for(j=i+1; j<Num; j++)
				{
					if( Array[i] > Array[j] )
						{
							Temp=Array[i];
							Array[i]=Array[j];
							Array[j]=Temp;
						}
				}
		}

	clrscr();
	printf("Sortedn Data Is:- \n\n");

	for(i=0; i<Num; i++)
		{
			printf("%d ",Array[i]);
		}
 getch();
}