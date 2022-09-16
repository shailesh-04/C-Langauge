#include<stdio.h>
#include<conio.h>
void main()
{  int a[2][2],i,j;
		  clrscr();
		  printf("enter 4 no.");

	 for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
		  {
		 scanf("%d",&a[i][j]);
		  }
		}
			printf ("metric eliment");
	 for(i=0;i<=2;i++)
	  {
			  for(j=0;j<=2;j++)
		  {
		  printf("%d",a[i][j]);
			 }
		}
			printf("\n");

 return 0;
}