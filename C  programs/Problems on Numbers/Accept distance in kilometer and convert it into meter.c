/* Write a program which accept distance in Kilometer and covert it into Meter.( 1 Kilometer=1000 Meter)
Input:  5
Output:  5000
Input:  12
Output:  12000
*/

#include<stdio.h>

int KiloMeter(int iNo)
{
   if(iNo<0)
   {
	   iNo=-iNo;
   }   
   int iAns=0;
   iAns= iNo*1000;
   return iAns;
}

int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter distance\n");
   scanf("%d",&iValue);

   iRet=KiloMeter(iValue);
   printf("Kilometer in Meter is:%d\n",iRet);

   return 0;
}   
