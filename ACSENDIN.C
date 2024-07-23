#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp=0,n,a[50];
	clrscr();
	printf("\n How Many Number Of Eliment:-");
	scanf("%d",&n);
	printf("\n Enter Eliment Of Arra ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
}