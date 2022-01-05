/* Write a program which accept range from user and display all numbers in between the range in reverse order.
Input:   10 18
Output:  18 17 16 15 14 13 12 11 10
Input:   10 10
Output:  10
Input:   -3  2
Output:  2 1 0 -1 -2 -3
Input:   90 18
Output:  Invalid range
*/

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
   int iCnt=0;

   if(iCnt<0)
   {
	   iCnt = -iCnt;
   }	   

   for(iCnt=iEnd;iCnt>=iStart;iCnt--)
   {
	  printf("%d\t",iCnt);
   }  
    if(iEnd<iStart)
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

   RangeDisplayRev(iValue1,iValue2);
   
   return 0;
}   