#include<stdio.h>
#include<conio.h>
					  //hear Define Arry Size
#define SZ 10

void main()
{
	int i,j=0,k=0;
	int num[SZ],even[SZ],odd[SZ];
	clrscr();
	printf("\n\t\t\t Even AND Odd Arry");
	printf("\n\nEnter Any  Diffrent Numbers:-");
	for(i=0; i<SZ; i++)
	{
		scanf("%d",&num[i]);         //=====
	}

	for(i=0; i<SZ; i++)
	{                       //condition
		if(num[i]%2==0)
		{
			printf("\n %d Is Even Number",num[i]);
			even[j++]=num[i];
		}
		else
		{
			printf("\n %d Is  Odd Number",num[i]);
			odd[k++]=num[i];
		}
	}
	printf("\n\n Below Is The Even Numbers\n-> ");
	for(i=0; i<j; i++)
	{
		printf("  %d",even[i]);
	}
	printf("\n Below Is The Odd Numbers\n-> ");
	for(i=0; i<k; i++)
	{
		printf("  %d",odd[i]);
	}

	getch();
}