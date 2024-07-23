#include<stdio.h>
#include<conio.h>
void main()
{
	int Num,Row,Space,No,Col;
 clrscr();
	printf("Enter Number Of Rows:- ");
	scanf("%d",&Num);

	for(Row=0; Row<Num; Row++)
		{
			for(Space=0; Space<(Num-Row); Space++)
				{
					printf(" ");
				}

			No=1;
			for(Col=0; Col<=Row; Col++)
				{
					printf(" %d",No);
					No=No*(Row-Col)/(Col+1);
				}
			printf("\n");
		}
 getch();
}