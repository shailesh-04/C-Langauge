#include<conio.h>
#include<dos.h>

void main()
{
  int i,j,r,mid,last;
  clrscr();

  printf("\n Enter Row:-");
  scanf("%d",&r);
	 printf("\n");
  for(i=1; i<=r; i++)
  {
		for(j=1; j<=r; j++)
		{
			if(i==r/2+1||j==r/2+1||
			  (i==1&&j>=r/2+1) ||
			  (i==r&&j<=r/2)||
			  (j==1&&i<=r/2)||
			  (j==r&&i>=r/2+1))
			 {
				printf(" *");
			 }
			else
			 {
				printf("  ");
			 }
		}
		printf("\n");
  }

getch();
}