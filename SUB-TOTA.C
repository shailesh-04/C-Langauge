#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,total;
	float per;
	clrscr();
	printf("\n\t\t\\1\2 SUBJECT TOTAL,PER,CLASS \2\1");
	printf("\n Enter S1 Mark :-");
	scanf("%d",&s1);
	printf("\n Enter S2 Mark :-");
	scanf("%d",&s2);
	printf("\n Enter S3 Mark :-");
	scanf("%d",&s3);

	total=s1+s2+s3;
	per=total/3;
	printf("\nTotal=%d \n Persantage=%f",total,per);

	if(per>=70)
	{
		printf("\n Distintion ");
	}
	else if(per>=60&&per<=69)
	{
		printf("\nFirt Class");
	}
	else if(per>=50&&per<=59)
	{
			printf("\n Second Class");
	}
	else if(per>=40&&per<=49)
	{
		printf("\n Pass class");
	}
	else
	{
		printf("\n Faile");
	}


	getch();
}
