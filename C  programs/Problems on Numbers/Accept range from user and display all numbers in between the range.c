/* Write a program which accept range from user and display all numbers in between the range.
Input:   10 18O
Output:  10 11 12 13 14 15 16 17 18
Input:   10 10
Output:  10
Input:   -3  2
Output:  -3 -2 -1 0 1 2
Input:   90 18
Output:  Invalid range
*/

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
   int iCnt=0;

   if(iCnt<0)
   {
	   iCnt = -iCnt;
   }	   
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
	   printf("%d\t",iCnt);
   }  
   if(iStart>iEnd)
   {
	   printf("Invalid Range\n");
   }
}   

int main()
{
   int iValue1=0,iValue2=0;

   printf("Enter Starting point\t");
   scanf("%d",&iValue1);

   printf("Enter Ending point\t");
   scanf("%d",&iValue2);

   RangeDisplay(iValue1,iValue2);
   
   return 0;
}   