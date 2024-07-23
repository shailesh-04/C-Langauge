#include<stdio.h>
#include<conio.h>
void main()
{
	long Num[30];
	long i,j,Temp,No_Elements;

 clrscr();
	printf("How Many Elements Do You Want To Enter:- ");
	scanf("%ld", &No_Elements);

	clrscr();
	printf("Enter %ld Numbers:- \n",No_Elements);

	for(i=0; i<No_Elements; i++)
		{
			scanf("%ld", &Num[i]);
		}

	for(i=0; i<No_Elements; i++)
		{
			for(j=i; j<No_Elements; j++)
				{
					if(Num[i]<Num[j])
						{
							Temp=Num[i];
							Num[i]=Num[j];
							Num[j]=Temp;
						}
				}
		}

	clrscr();
	printf("Descending Order:- ");

	for(i=0; i<No_Elements; i++)
		{
			printf("%ld ",Num[i]);
		}
 getch();
}