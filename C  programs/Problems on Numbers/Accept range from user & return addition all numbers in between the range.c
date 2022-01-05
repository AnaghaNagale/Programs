/* Write a program which accept range from user and return addition all numbers in between the range.(Range should conatains positive numbers only)
Input:   10 18
Output:  126
Input:   23 30
Output:  212
Input:   -10 2
Output:  Invalid range
Input:   90 18
Output:  Invalid range
*/

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
   int iSum=0;
   int iCnt=0;

   if(iStart<0)
   {
	   printf("Invalid Range\n");
	   return 0;
   }

   if(iEnd<0)
   {
	   printf("Invalid Range\n");
	   return 0;
   }

   if(iStart>iEnd)
   {
	   printf("Invalid Range\n");
   }
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
	    iSum=iSum+iCnt;
   }  
   return iSum;
   
}   

int main()
{
   int iValue1=0,iValue2=0,iRet=0;

   printf("Enter Starting point\t");
   scanf("%d",&iValue1);

   printf("Enter Ending point\t");
   scanf("%d",&iValue2);

   iRet=RangeSum(iValue1,iValue2);
   printf("Addition is %d\n",iRet);

   return 0;
}   