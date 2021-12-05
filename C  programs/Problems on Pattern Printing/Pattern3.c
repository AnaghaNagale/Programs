/* Write a program accept number from user and Display below pattern.

Input: 4
Output: 4 3 2 1

*/


#include<stdio.h>

void DisplayPattern(int iNo)
{
   int iCnt=0;
   
   if(iNo<0)
   {
      iNo-iNo;
   }

   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
     printf("%d\t",iCnt);
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
   

   