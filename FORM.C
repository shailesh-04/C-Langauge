#include<stdio.h>
#include<conio.h>
void main()
{
	int Roll_No;
	char Name[45],City[45];
	long Phone_No,Pin_Code;
clrscr();
	printf("\n\t\t\t=======FORM=========");

	printf("\nEnter Roll:-");
	 scanf("%d",&Roll_No);

	printf("Enter Name:-");
	 scanf("%s",&Name);

	 printf("Enter City:-");
	  scanf("%s",&City);

	 printf("Enter Mobail No.");
	  scanf("%ld",&Phone_No);

	 printf("Enter Pincode");
	  scanf("%ld",&Pin_Code);

	printf("\n===========RESULT==========");

	printf("\nRoll_No:-%d",Roll_No);
	printf("\nName:-%s",Name);
	printf("\nCity:-%s",City);
	printf("\nPhone_No:-%ld",Phone_No);
	printf("\nPin_Code:-%ld",Pin_Code);

 getch();
}