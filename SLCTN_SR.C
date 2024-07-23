/* ID:-github.com/shilesh-04     SELECTION_SORT
										  -_-_-_-_-_-_-_-
																							 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp=0,a[50],n; //declaration variable
	clrscr();
	printf("ID:-github.com/shailesh-04\n\t\t\t\1 SELECTION SORT:\n\t\t\t===================");
	printf("\n\nEnter Renge Of Arry:-");
	scanf("%d",&n);  //initilization lloop
	printf("Enter Arry Elinemt :-");
	for(i=0; i<=n-1; i++)
	{         //input arry
		scanf("%d",&a[i]);
	}
	for(i=0; i<=n-1; i++) // process sorting
	{
		for(j=i+1; j<=n-1; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0; i<=n-1; i++)
	{                   // display sorting arry
		printf(" %d",a[i]);
	}
	getch();
} //and main