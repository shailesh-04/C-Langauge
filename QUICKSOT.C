#include<stdio.h>
#include<conio.h>

int Partition (char A[], int Start, int End)
{
	 char Pivot = A[End];
	 int j;
	 char T;
	 int i = (Start - 1);

	 for(j = Start; j <= End - 1; j++)
		{
			if(A[j] < Pivot)
				{
					i++;

					T = A[i];
					A[i] = A[j];
					A[j] = T;
				}
		}

	 T = A[i+1];
	 A[i+1] = A[End];
	 A[End] = T;

	 return (i + 1);
}

void Quick(char A[], int Start, int End)
{
	int P;
	 if(Start < End)
		{
			P = Partition(A, Start, End);
			Quick(A, Start, P - 1);
			Quick(A, P + 1, End);
		}
}

void Print_Arr(char A[], int N)
{
	 int i;
	 for(i = 0; i < N; i++)
		{
			printf("%c ", A[i]);
		}
}

void main()
{
	 char A[] = { 'b','d', 't', 's', 'a', 'c' };
	 int N = sizeof(A) / sizeof(A[0]);

 clrscr();
	 printf("Before Sorting Array Elements Are - \n\n");

	 Print_Arr(A, N);

	 Quick(A, 0, N - 1);

	 printf("\n\nAfter Sorting Array Elements Are - \n\n");

	 Print_Arr(A, N);
 getch();
}