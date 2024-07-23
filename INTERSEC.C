// Program To Find Inter Section
#include<stdio.h>
#include<conio.h>
void Intersection()
{
   long a[3],b[3],anb[6];
   long i=0,j=0,k=0;
   printf("Enter Three Elementes Of Set A:- \n");
   for(i=0; i<3; i++)
      {
			scanf("%ld",&a[i]);
		}
	printf("Enter Three Elementes Of Set B:- \n");
	for(j=0; j<3; j++)
		{
			scanf("%ld",&b[j]);
		}
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					if(a[i]==b[j])
						{
							anb[k++]=a[i];
							break;
						}
				}
		}
	printf("\n anb ={ ");
	for(i=0; i<k; i++)
		{
			printf("%ld ",anb[i]);
		}
			printf(" }");
}
void main()
{
	  void Intersection(void);
 clrscr();
	  Intersection();
 getch();
}