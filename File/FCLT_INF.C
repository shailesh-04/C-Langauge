#include<stdio.h>
#include<conio.h>
#define SZ 2
char fname[20];
int i,fid;
float fta,fda,fhra,fmt_s,fds;
long int fno;
void get_data()
{
	printf("\n Enter fclt Id :-");
	scanf("%d",&fid);
	fflush(stdin);
	printf("\n Enter fctl Name :-");
	gets(fname);
	printf("\n Enter Fctl choNo. :-");
	scanf("%ld",&fno);
	printf("\n Enter fds :-");
	scanf("%f",&fds);
}
void find_fs()
{
	fta=(fds*10.0)/100;
	fda=(fds*40.0)/100;
	fhra=(fds*15.0)/100;
	fmt_s=fds+fta+fda+fhra;
}
void put_data()
{
	printf("FACUNCY INFOMATION\n");
	printf("ID\t\tF_Name\t\tF_No\t\t\tFMS\n");
	printf("%d\t\t%s\t\t%ld\t\t\t%0.4f",fid,fname,fno,fmt_s);
}
void main()
{
	clrscr();
	get_data();
	find_fs();
	clrscr();
	put_data();
	getch();

}