/* Write a program which accept amount in US Doller and return its corresponding value in Indian currency.
consider 1$ as 70 rupes.

Input :  10
Output : 700

Input :  3
Output : 210

Input :  1200
Output : 84000

*/

#include<stdio.h>

int DoolerToINR(int iNo)
{
	int iAns=0;
	
	iAns=iNo*70;
	return iAns;
}

int main()
{
   int iValue=0;
   int iRet=0;
   
   printf("Enter number of USD: ");
   scanf("%d",&iValue);
   
   iRet=DoolerToINR(iValue);
   printf("Value of INR is: %d\n",iRet);
   
   return 0;
} 