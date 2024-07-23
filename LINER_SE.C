/*ID:-                           LINEAY SEARCH
github.com/shilesh-04			 ====================
----------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],flag=0,s;   //declear variable
	clrscr();
	printf("\n-----------------------------\1---LINEAR SEARCH---\1------------------------");  //tital
	printf("\n\nEnter Renge Of Arry :-");
	scanf("%d",&n);                        //input range of arry
	printf("\nEnter Arry Of Aliment :-");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",&a[i]);                  //input arry
	}
	printf("\nEnter Search Elimant :-");
	scanf("%d",&s);                        //input search eliment
	for(i=0; i<=n-1; i++)
	{
		if(a[i]==s)
		{                               //condition
			flag=1;
			break;
		}
	}
	printf("\n------------------RESULT----------------");  //result
	if(flag==1)
	{
		printf("\n FOUND");      //search eliment is exist
	}
	else
	{
		printf("\n NOT FOUND");   //search eliment is not exist
	}
	getch();
} //main end