/* Write a program accept number from user and Display below pattern.

Input: 6
Output: * # * # * # 

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
	  if((iCnt%2)==0)
	  {
	     printf("#\t");
	  }
      else
      {
        printf("*\t");
      }		
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