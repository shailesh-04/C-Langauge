#include<stdio.h>
#include<conio.h>
void main()
{
	long Num[200],No_Elements;
	long i,j,Temp;

 clrscr();
	printf("Enter Many Elements Do You Want To Enter:- ");
	scanf("%ld",&No_Elements);

	clrscr();
	printf("Enter %ld Elements:- \n",No_Elements);

	for(i=0; i<No_Elements; i++)
		{
			scanf("%ld",&Num[i]);
		}

	for(i=0; i<No_Elements; i++)
		{
			for(j=i; j<No_Elements; j++)
				{
					if(Num[i]>Num[j])
						{
							Temp=Num[i];
							Num[i]=Num[j];
							Num[j]=Temp;
						}
				}
		}

	clrscr();
	printf("The Numbers In Ascending Order Are:- \n");

	for(i=0; i<No_Elements; i++)
		{
			printf("%ld  ",Num[i]);
		}

 getch();
}
