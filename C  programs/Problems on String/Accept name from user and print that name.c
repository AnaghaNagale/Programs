/* Write a program  which accept name from user and print that name.
Input : Anagha Nagale
Output: Anagha Nagale
*/

#include<stdio.h>

int main()
{  
   char Name[30];

   printf("Please enter full name\t");
   scanf("%[^\n]",&Name);

   printf("Your name is %s",Name);
   
   return 0;
}   