#include<stdio.h>
#include<conio.h>

swap(&a,&b);
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	clrscr();
	printf("\n\t\t \1 \2 \3 SWAP VALUE IN FUNCTION \3 \2 \1 ");
	printf("\n\nEnter Any Number a :-");
	scanf("%d",a);

	printf("\nEnter any Number b :-");
	scanf("%d",b);

	swap(&a,&b);
	printf("A= %d",a);
	printf("B= %d",b):
	getch();
}