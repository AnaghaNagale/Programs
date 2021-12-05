/*  Write a program accept number from user and Display below pattern.

Input: 4
Output: 1 *  2 * 3  * 4 * 

*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
   int iCnt=0;

   if(iNo<0)
   {
      iNo-iNo;
   }

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     printf("%d *\t",iCnt);
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
   