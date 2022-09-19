#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\t\t=========MAX NUMBER============");
	printf("\n\nenter two number A,B :-");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("\nthis number is max:- %d",b);

	}
	if(b<a)
	{
		printf("\nthis number is max:- %d",a);
	 }
 getch();
}