/* Wrrite a program which accept distance area in Square feet and covert it into Square Meter.( 1 Square feet=0.0929 Square Meter)
Input :  5
Output :  0.464515
Input :  7
Output :  0.650321
*/

#include<stdio.h>

double SquareMeter(int iNo)
{
   if(iNo<0)
   {
	   iNo=-iNo;
   }   
   double dRes=0;
   dRes= iNo*0.0929;
   return dRes;
}

int main()
{
   int iValue=0;
   double dRet=0;

   printf("Enter area in Square feet\n");
   scanf("%d",&iValue);

   dRet=SquareMeter(iValue);
   printf("Square feet in Square Meter is:%lf\n",dRet);
   
   return 0;
}   
