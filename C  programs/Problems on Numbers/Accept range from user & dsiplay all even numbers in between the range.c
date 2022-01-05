/* Write a program which accept range from user and display all even numbers in between the range.
Input:  23 35
Output:  24 26 28 30 32 34
Input:   10 10
Output:  10
Input:    -3  2
Output:  -2 0 2
Input:  90 18
Output:  Invalid range
*/

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
	int iCnt=0;

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
	    {
			printf("%d\t",iCnt);
	    }
    }
   if(iStart>iEnd)
   {
	   printf("Invalid Range\n");
   }
}   

int main()
{
   int iValue1=0,iValue2=0;

   printf("Enter Starting point\n");
   scanf("%d",&iValue1);

   printf("Enter Ending point\n");
   scanf("%d",&iValue2);

   RangeDisplayEven(iValue1,iValue2);
   
   return 0;
}   