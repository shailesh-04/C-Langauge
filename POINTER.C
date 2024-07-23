#include<stdio.h>
#include< conio.h>

void disp (int *, int);
void main( )
 {
	int i, a[10],n;
	printf ("enter the size of an array:");
 scanf ("%d", &n);
 printf ("enter the array elements:");
 for (i=0; i<n; i++)
 scanf ("%d", &a[i]);
 disp (a,n); // passing array and its size

printf(“ array elements after sorting ” );
 for(i=0;i<n;i++)
printf (“%d”, a[i]);
 }
 void disp(int a[ ], int n) 
 { 
 int i,j, temp; 
 for (i=0; i<n; i++) 
 for (j=0; j<n; j++) 
 { 
 if (a[j] > a[i]) 
 { 
 temp = a[ j ]; 
 a[ j ] = a[ i ]; 
 a[ i ] = temp; 
 } 
 } 
 }