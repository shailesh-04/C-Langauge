#include<stdio.h>
#include<conio.h>


void main()
{
	int a,b,c;
	clrscr();
	printf("enter diffrent no. A :-");
	scanf("%d",&a);
	printf("enter diffrent no. B :-");
	scanf("%d",&b);
	printf("enter diffrent no. C :-");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("A:- %d",a);
		}
		else
		{
			printf("C:- %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			 printf("B:- %d ",b);
		}
		else
		{
			 printf("C: %d-",c);
		}
	}
  getch();

  }