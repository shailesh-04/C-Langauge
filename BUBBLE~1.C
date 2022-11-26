																													 /*
--------->	ID:-->  github.com/shailesh-makavana
						  ----------------------------
									BUBBLE SHOTR																				  */
#include<stdio.h>
#include<conio.h>
//program execution starts from here
int main()
{
	 int a[50],n,i,j,temp; //Variable declaration
	 clrscr();
	 printf("Enter the size of array: ");
	 scanf("%d",&n); //Taking size of the array from user
	 printf("Enter the array elements: ");
	 for(i=0;i<n;++i)
	 {
		  scanf("%d",&a[i]); //Taking array elements from user
	 }
	 for(i=1;i<n;i++)
	 {
		  for(j=0;j<(n-i);++j)
			{
				if(a[j]>a[j+1]) //Bubble sort in c using array logic
				{
					 temp=a[j];

					 a[j]=a[j+1];

					 a[j+1]=temp;
				} //end if
			}//end iner loop
	  } //end outer loop
	printf("\n\nArray after sorting: ");

	for(i=0;i<n;++i)
	{
		  printf("%d ",a[i]); //Printing elements after bubble sort
	}
	getch();
} //end main