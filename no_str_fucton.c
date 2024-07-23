
#include<stdio.h>
#include<string.h>

void main()
{
 
 /*Visit for more- https://www.programmingwithbasics.com */

   char str[100], temp;
   int i, j = 0;

   printf("Enter The String: ");
   gets(str);

   i = 0;
   j = strlen(str) - 1;

   while (i < j) 
   {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }

   printf("\nReverse Words in a String Is: %s\n\n", str);
   
   return (0);
