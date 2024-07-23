#include<stdio.h>
#include<conio.h>
#define SZ 2
//globl variable

float F_mnt_slr[SZ],F_ds[SZ],F_ta[SZ],F_da[SZ],F_hra[SZ];
int F_id[SZ],i;
long int F_conNo[SZ],Ch;
char F_name[20][SZ];
void find_salery();
void Getdata()
{
	for(i=0;i<SZ; i++)
	{
		clrscr();
		printf("\n Enter F_id :-");
		scanf("%d",&F_id[i]);
		fflush(stdin);
		printf("\n Enter F_name :-");
		gets(F_name[i]);
	printf("\n Enter F_conNo. :-");
		scanf("%ld",&F_conNo[i]);
		printf("\n Enter F_bs :-");
		scanf("%f",&F_ds[i]);
	}
	find_salery();
}
void find_salery()
{
	for(i=0;i<SZ; i++)
	{
		F_ta[i]=(F_ds[i]*10)/100;
		F_da[i]=(F_ds[i]*40)/100;
		F_hra[i]=(F_ds[i]*15)/100;

		F_mnt_slr[i] = F_ds[i] + F_ta[i] + F_da[i] + F_hra[i];
	}

}
void putF_data()
{
	clrscr();
	gotoxy(39,2);printf("FACULTY");
	gotoxy(1,3);printf("F_id\tF_name \t F_conNo. \t F_ds \t  F_ta \t  F_da \t    F_hra\t F_ms");
	gotoxy(1,4);printf("-------------------------------------------------------------------------------");
	for(i=0;i<SZ; i++)
	{
		gotoxy(1,6+i); printf("%d",F_id[i]);
		gotoxy(7,6+i); printf("%s",F_name[i]);
		gotoxy(19,6+i);printf("%ld",F_conNo[i]);
		gotoxy(32,6+i);printf("%0.2f",F_ds[i]);
		gotoxy(43,6+i);printf("%0.2f",F_ta[i]);
		gotoxy(53,6+i);printf("%0.2f",F_da[i]);
		gotoxy(61,6+i);printf("%0.2f",F_hra[i]);
		gotoxy(72,6+i);printf("%0.2f\n",F_mnt_slr[i]);
		// gotoxy(1,3);printf("\n%d\t%s\t  %ld\t %0.2f\t %0.2f\t%0.2f\t%0.2f\t%0.2f",F_id,F_name,F_conNo,F_da,F_ta,F_da,F_hra,F_mnt_slr);
	}
}
void main()
{
		while(1)
	{
	clrscr();
	printf("\n Press 1--> Isert Data");
	printf("\n Press 2--> Display Data");
	printf("\n Press 3--> Seash Data");
	printf("\n Press #--> Exit");
	printf("\n\n\t Enter Choice");
	Ch=getch();
	switch(Ch)
		{
			case '1': Getdata();    getch(); break;
			case '2': putF_data();  getch(); break;
			case '#': exit();
			default: printf("invalide choise");
		}
	}
}