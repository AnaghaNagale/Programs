/*  Write a program accept number from user and Display below pattern.

Input: 6
Output: a b c d e f

*/

#include<stdio.h>   

void Display(int iNo)
{
   int iCnt=0;
   char ch='a';

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("%c\t",ch);
	  ch++;
   }	  
   
}

int main()
{
   int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   Display(iValue);
   
   return 0;
}   