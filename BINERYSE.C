#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s,a[50],high,low,flag=0,mid; //varible declear
	clrscr();                            //Titale
	printf("\n------------------------\1---BINARY SEARCH---\1---------------------");
	printf("\n Enter Range Of Arry :-");
	scanf("%d",&n);                      //input range of arry
	printf("\n Enter Eliment Of Arry :-");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",&a[i]);                //input arry
	}
	printf("\n Enter Search Eliment :-");
	scanf("%d",&s);                      //input search eliment
	low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==s)
		{
			flag=1;
			break;
		}
		else if(s>a[mid])                  //condition
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}                          //reselt
	printf("--------------------RESULT----------------------");
	if(flag==1)
	{
		printf("\n Eliment Is Found"); //search eliment is avalable
	}
	else
	{
		printf("\n Eliment Is Not Found"); //search eliment not is avalable
	}
	getch();
}


