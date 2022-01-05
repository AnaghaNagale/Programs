/* Write a program which accept total marks and obtained marks from user and calculate percentage.
Input :  1000  745
Output : 74.5%
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

float Percentage(int iNo1,int iNo2)
{
  if((iNo1,iNo2)>0)
  {
    float per;
    per=(iNo2*100)/iNo1;
    return per;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
   int iValue1=0,iValue2=0;
   float fRet=0.0;

   printf("Please enter total numbers\t");
   scanf("%d",&iValue1);

   printf("Please enter obtained marks\t");
   scanf("%d",&iValue2);

   fRet=Percentage(iValue1,iValue2);
   printf("Calculated percentage is:%f\n",fRet);
   
   return 0;
}  