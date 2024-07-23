#include<stdio.h>
#include<conio.h>
void main()
{
  int s1,s2,s3,s4,s5,total;
  float per;
 clrscr();
	printf("enter number of sub 1:- ");
	scanf("%d",&s1);

	printf("enter number of sub 2:- ");
	scanf("%d",&s2);
	printf("enter number of sub 3:- ");
	scanf("%d",&s3);
	printf("enter number of sub 4:- ");
	scanf("%d",&s4);
	printf("enter number of sub 5:- ");
	scanf("%d",&s5);

	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("\ntotal of sub number= %d",total);
	printf("\nPersantage Is = %f",per);

	if(per<40)
		{
			printf("\n\nstudent is fail in Per");
		}
	else
		{
			printf("\n\nstudent is pass in per");
		}

	if(s1<40)
		{
			printf("\n\nstudent is fail in s1");
		}
	else
		{
			printf("\n\nstudent is pass in s1");
		}

	if(s2<40)
		{
			printf("\n\nstudent is fail in s2");
		}
	else
		{
			printf("\n\nstudent is pass in s2");
		}

	if(s3<40)
		{
			printf("\n\nstudent is fail in s3");
		}
	else
		{
			printf("\n\nstudent is pass in s3");

		}

	if(s4<40)
		{
			printf("\n\nstudent is fail in s4");
		}
	else
		{
			printf("\n\nstudent is pass in s4");
		}

	if(s5<40)
		{
			printf("\n\nstudent is fail in s5");
		}
	else
		{
			printf("\n\nstudent is pass in s5");
		}
 getch();
}