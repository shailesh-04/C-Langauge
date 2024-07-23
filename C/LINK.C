#include<conio.h>
#include<stdio.h>
struct Data
{
	int data;
	struct Data *next;
}*temp,*start='\0',*end='\0';
int i;
void F_i()
{
	temp = (struct Data *)malloc(sizeof(struct Data ));
	printf("\nEnter Data");
	scanf("%d",&temp->data);
	temp->next ='\0';
	start->next = temp;
	start = temp;
	end = temp;
}
void Dis()
{
	clrscr();
	for(temp=start; temp!='\0'; temp=temp->next)
	{
		printf("%d->",temp->data);
	}

}
void main()
{
	clrscr();
	for(i=0; i<3; i++)
	{
	  F_i();
	}
	 Dis();
	getch();
}
