#include<stdio.h>
#include<conio.h>
#define SZ 20
void main()
{
	int num[SZ],div=0,i,j,flag=0,k=0,a=0;
	int p[SZ],np[SZ];
	 clrscr();
	for(i=0; i<SZ; i++)
	{
		printf("Enter a Number:- ");
		scanf("%d",&num[i]);
	}
	printf("\n");
	for(j=0; j<SZ; j++)
	{
	  //	num1=num[j3
		div=num[j]/2;
		for(i=2; i<=div; i++)
		{      flag=0;
				if(num[j]%i==0)
					{
						printf("\n %d Is a Not Prime. ",num[j]);
							np[k++]=num[j]; //inilige not Primiym Number
						flag=1;
						break;
					}
		}

		if(flag==0)
			{
				printf("\n %d Is a Prime.. ",num[j]);
				p[a++]=num[j]; //inilige Primery Number
			}
	}
	printf("\n\nAll Prime Number.\n");
	for(i=0; i<a; i++)
	{
		printf("%d \t",p[i]);
	}
	printf("\nAll Prime Not Number.\n");
	for(i=0; i<k; i++)
	{
		printf("%d \t",np[i]);
	}
	getch();
}