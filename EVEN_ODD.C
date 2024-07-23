#include<stdio.h>
#include<conio.h>
void main()
{
	long Entry,i,Numbers[1000];
	FILE *fp1,*fp2;

	Label:
 clrscr();
	printf("How Many Numbers Do You Want To Enter:- ");
	scanf("%ld",&Entry);

/*	if(Entry>1000)
		{
			gotoxy(16,14);
			printf("Please Enter a Number Greater Than Or Equal To 1000");
			getch();
			goto Label;
		}
  */
	fp1=fopen("Even.txt","a");
	fp2=fopen("Odd.txt","a");

	printf("\n");

	for(i=0; i<Entry; i++)
		{
			fflush(stdin);
			printf("Enter A Number:- ");
			scanf("%ld",&Numbers[i]);

			if(Numbers[i]%2==0)
				{
					fprintf(fp1,"%ld\n",Numbers[i]);
				}
			else
				{
					fprintf(fp2,"%ld\n",Numbers[i]);
				}
		}

	fclose(fp1);
	fclose(fp2);
 getch();
}