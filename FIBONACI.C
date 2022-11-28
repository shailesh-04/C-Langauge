/*id:- github.com/shailesh-04
--------------------------------FIBONACI NUMBER ------------------------
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,c,i;
	clrscr();
	printf("ID:-github.com/shailesh-o4\n\t\t\t Print Fibonaci Number\n\t\t\t-----------------------");
	printf("\nEnter Range Of Fibonci :-");
	scanf("%d",&n);
	printf("\nAbove fibonaci Number\n ");
	for(i=1; i<=n; i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}