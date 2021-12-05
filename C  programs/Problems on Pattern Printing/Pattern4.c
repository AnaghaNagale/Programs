/* Write a program accept number from user and Display below pattern.

Input: 5
Output: 2 4 6 8 10

Input: 8
Output: 2 4 6 8 10 12 14 16

*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
   int iCnt=0;
   
   if(iNo<0)
   {
      iNo=-iNo;
   }

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("%d\t",iCnt*2);
   }
}

int main()
{
   int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   DisplayPattern(iValue);

   return 0;
}   
   
