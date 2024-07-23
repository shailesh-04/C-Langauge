/*        palidrom number
		-----------------------
ID :- 'github.com/shailesh-04'
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,c,r,s=0;          //declear varble
	clrscr();

	printf("\n\t\t \1 \2 CHEACK TO PALIDROME NUMBER \2 \1"); // titel
	printf("\n\n Enter Any Number For Check Pandrome Number  :-");
	scanf("%d",&num);   //input number
	c=num;
	while(num>0)   //loop
	{
		r=num%10;
		s=r+(s*10);
		num=num/10;
	}
	printf("\n-------------RESULT---------------\n");
	if(c==s)
	{
		printf("\n This Number Is Pandrome Number :-%d",c);
	}
	else
	{
		printf("\n This Number Is Not Pandrom Number :-%d",c);
	}

	getch();
}  //end main