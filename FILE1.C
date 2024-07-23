#include<stdio.h>
#include<conio.h>
void main()
{
	int Number,i,File_Number;
	FILE *fp;

 clrscr();
	fp=fopen("Hello.c","w");
	for(i=0; i<5; i++)
		{
			printf("Enter a Number:- ");
			scanf("%d",&Number);
			fprintf(fp,"%d\n",Number);
		}

	fclose(fp);

	fp=fopen("Hello.c","r");
	printf("\n\nEntered Numbers is :- \n");
	for(i=0; i<5; i++)
		{
			fscanf(fp,"%d",&File_Number);
			printf("%d\n",File_Number);
		}
	fclose(fp);
	getch();
}