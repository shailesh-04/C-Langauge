#include<stdio.h>
#include<conio.h>
#define SZ 2
//globle var
struct student
{
	int roll,s1,s2,s3,total,sem;
	char gender,name[30],city[10],gread;
	float per;
}s[SZ];
int i;
void getdata()
{
	for(i=0; i<SZ; i++)
	{
		printf("\n\t\t\t Info Of Student Detaile\n");
		printf("\n\n Enter STD Roll Num :-");
		scanf("%d",&s[i].roll);

		fflush(stdin);
		printf("\n Enter STD. Name:-");
		gets(s[i].name);
		printf("\n Enter STD City :-");
		gets(s[i].city);

		fflush(stdin);
		printf("\n Enter STD gender :-");
		scanf("%c",&s[i].gender);
		printf("\n Enter Sem :-");
		scanf("%d",&s[i].sem);
		printf("\n\n Enter Mark s1:-");
		scanf("%d",&s[i].s1);
		printf("\n Enter Makr S2 :-");
		scanf("%d",&s[i].s2);
		printf("\n Enter Mark s3 :-");
		scanf("%d",&s[i].s3);

}
void find_total()
{
	s[i].total=s[i].s1+s[i].s2+s[i].s3;
}
void find_per()
{
		 s[i].per= (s[i].total/3;
}
void find_gread()
{
	if(s[i].per<40)
		{
			s[i].gread='F';
		}
	else if(s[i].per>=40 && s[i].per<50)
		{
			 s[i].gread='E';
		}
	else if(s[i].per>=50 && s[i].per<60)
		{
			 gread='D';
		}
	else if(s[i].per>=60 && s[i].per<70)
		{
			s[i].gread='C';
		}
	else if(s[i].per>=70 && s[i].per<80)
		{
			s[i].gread='B';
		}
	else if(s[i].per>=80 && s[i].per<90)
		{
			s[i].gread='A';
		}
	else if(s[i].per>=90 && s[i].per<=100)
		{
			gread='O';
		}
}
void put_data()
{
	printf("roll\t name\t city\t gendr\tsem\ts1\ts2\ts3\tper\tgred");
	printf("\n---------------------------------------------------------------------------");
	printf("\n%d\t%s\t%s\t%c\t%d\t%d\t%d\t%d\t%0.2f\t%c",s[i].roll,s[i].name,s[i].city,s[i].gender,s[i].sem,s[i].s1,s[i].s2,s[i].s3,s[i].per,s[i].gread);
}
void main()
{
	  clrscr();
	  getdata();
	  find_total();
	  find_per();
	  find_gread();
	  clrscr();
	  put_data();
	  getch();
}