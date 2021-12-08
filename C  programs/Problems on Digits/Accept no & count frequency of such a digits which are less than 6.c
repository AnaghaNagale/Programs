/*Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input:  2395
Ouput:  3

Input: 9440
Output: 3

Input:  6679
Ouput:  0

Input: 96672
Output: 1

*/

#include<stdio.h>

int Count(int iNo)
{
   int iCnt=0;
   int iDigit=0;
   if(iNo<0)
   {
      iNo=-iNo;
   }

   while(iNo>0)
   {
      iDigit=iNo%10;
      if(iDigit<6)
      {
        iCnt++;
      }
    iNo=iNo/10;
   }
   return iCnt;   
}

int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter number\n");
   scanf("%d",&iValue);

   iRet=Count(iValue);

   printf("%d",iRet);
   
   return 0;
}   
   