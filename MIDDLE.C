																												/*
----------------------------------------------------------------------------------------------
 |||		 FIND MIDDLE VALUE IN USING THREE VALUE        ||
------------------------------------------------------------------------------------------																																 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\t\t \1 \2 \3 Middel Value \3 \2 \1");    //titale
	printf("\n\nEnter Any Number A:-");
	scanf("%d",&a);
	printf("\nEnter Any Number B:-");
	scanf("%d",&b);
	printf("\nEnter Any Number C:-");
	scanf("%d",&c);
      /*
	if(a==b||b==c||c==a)
	{
		printf("");
			if(a==b)
			{
					printf("\n A=B Is Same %d=%d",a,b);
			}
			if(b==c)
			{
					printf("\n B=C Is Same %d=%d",b,c);
			}
			if(c==a)
			{
					printf("\n C=A Is Same %d=%d",c,a);
			}
	}*/
	if(a>b&&a<c||a<b&&a>c)
	{
			printf("\n\1 A Value Is Middle =%d",a);
	}
	else if(b>a&&b<c||b<a&&b>c)
	{
			printf("\n\1 B Value Is Middle =%d",b);
	}
	else
	{
			printf("\n\1 C Value Is Middle =%d",c);
	}

			getch();
}