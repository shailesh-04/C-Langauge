#include<stdio.h>
#include<conio.h>
#define Limite 100

struct Student
{
	char 	Student_Name[23];
	int 	Roll_No,S1,S2,S3,S4,Sum;
	float Per;
};

struct Student Data[Limite];

FILE *fp;

void main()
{
	int Entry,i;

 clrscr();

	fp=fopen("Try.xls","w");

	printf("How Many Student Data You Want To Enter:- ");
	scanf("%d",&Entry);

	fprintf(fp,"Student Name\tRoll_No\tS1\tS2\tS3\tS4\tSum\tPer");
	for(i=0; i<Entry; i++)
		{
			fflush(stdin);
			printf("\nEnter Student Name    :- ");
			gets(Data[i].Student_Name);
			printf("Enter Student Roll No :- ");
			scanf("%d",&Data[i].Roll_No);
			printf("Enter Student S1 Mark :- ");
			scanf("%d",&Data[i].S1);
			printf("Enter Student S2 Mark :- ");
			scanf("%d",&Data[i].S2);
			printf("Enter Student S3 Mark :- ");
			scanf("%d",&Data[i].S3);
			printf("Enter Student S4 Mark :- ");
			scanf("%d",&Data[i].S4);

			Data[i].Sum = Data[i].S1 + Data[i].S2 + Data[i].S3 + Data[i].S4;
			Data[i].Per = (Data[i].Sum * 100.0)/400;

			fprintf(fp,"\n%s\t",Data[i].Student_Name);
			fprintf(fp,"%d\t",Data[i].Roll_No);
			fprintf(fp,"%d\t",Data[i].S1);
			fprintf(fp,"%d\t",Data[i].S2);
			fprintf(fp,"%d\t",Data[i].S3);
			fprintf(fp,"%d\t",Data[i].S4);
			fprintf(fp,"%d\t",Data[i].Sum);
			fprintf(fp,"%f",Data[i].Per);
		}
	fclose(fp);
 getch();
}