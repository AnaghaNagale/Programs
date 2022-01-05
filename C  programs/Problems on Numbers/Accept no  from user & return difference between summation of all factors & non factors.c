/* Write a program which accept number from user and return difference between summation of all factors & non factors.
Input :   12
Output : -34 (16-50)
Input :   10
Output :  -29  (8-37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
   int i=0;
   int sum1=0;
   int sum2=0;
   int Diff=0;

   for(i=1;i<=iNo/2;i++)
   if((iNo%i)==0)
   {
     sum1+=i;
   }
   for(i=1;i<=iNo;i++)
   if((iNo%i)!=0)
   {
     sum2+=i;
   }	 
   Diff=sum1-sum2;
   return Diff;
}

int main()
{
  int iValue=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet=FactDiff(iValue);
  printf("Difference between sum of all its factors and nonfactors is:%d\n",iRet);

  return 0;
}  