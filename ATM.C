#include<stdio.h>
#include<conio.h>
void main()
{
		float id;
		int i;
		clrscr();

		printf("\n\t\t ATM");
		textcolor(RED);
		for(i=0;i<=10;i++)
		{
		cprintf("--");
		}
		printf("\n Enter Id :-");
		scanf("%f",&id);


		if(id==100001)
		{
		printf("\nNAME:- RameshBhai ManuBhai Baraiya");
		printf("\nBALENSE:-2,45,000");
		printf("\nADDRESH:-Mahuva");
		printf("\nMOBAIL_NO_:- 9909538383");
		}
		else if(id==100002)
		{
			printf("NAME:- KaleskBhai RajuBhai Mondel");
			printf("BALENS:- 50,234");
			printf("ADDTESH:-Rajkot");
			printf("MOBAIL_NO_:-27474748475");
		}
		else if(id==100003)
		{
			printf("NAME:-RajuBahi DharmeshBhai Gousvami");
			printf("BALENS:-75790");
			printf("ADDTESH:-Surat");
			printf("MOBAIL_NO_:-27474948484");
		}
		else if(id==100004)
		{
			printf("NAME:-AsisaBhai KaluBhai Khuman");
			printf("BALENS:- 392800");
			printf("ADDTESH:-Amreli");
			printf("MOBAIL_NO_:-38484849384");
		}
		else if(id==100005)
		{
			printf("NAME:-DharameshBhai VipulBhai Sisara");
			printf("BALENS:-1,34,800 ");
			printf("ADDTESH:-Vijpadi");
			printf("MOBAIL_NO_:-3747483385");
		}
		else if(id==100006)
		{
			printf("NAME:- GaneshBhai RajuBhai Pamar");
			printf("BALENS:- 80,340");
			printf("ADDTESH:-Jagdhar");
			printf("MOBAIL_NO_:-389945539");
		}
		else if(id==100007)
		{
			printf("NAME:-MukeshBhai ManuBhai Khuman");
			printf("BALENS:- 1,20,400");
			printf("ADDTESH:-Rajkot");
			printf("MOBAIL_NO_:-37474938437");
		}
 /*	else if(id==100008)
		{
			printf("NAME:-
			printf("BALENS:-
			printf("ADDTESH:-
			printf("MOBAIL_NO_:-
		}
	else if(id==100009)
		{
			printf("NAME:-
			printf("BALENS:-
			printf("ADDTESH:-
			printf("MOBAIL_NO_:-
		}
	else if(id==100010)
		{
			printf("NAME:-
			printf("BALENS:-
			printf("ADDTESH:-
			printf("MOBAIL_NO_:-
		}
	else if(id==100011)
		{
			printf("NAME:-
			printf("BALENS:-
			printf("ADDTESH:-
			printf("MOBAIL_NO_:-
		}
	 */

 getch();
}