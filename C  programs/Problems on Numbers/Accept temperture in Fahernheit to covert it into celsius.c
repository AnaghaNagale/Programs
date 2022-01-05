/* Write a program which accept temperture in Fahernheit to convert it into celsius.(1 celsius=(Fahernheit -32)*(5/9))
Input: 10
Output: -12.2222    (10-32)*(5/9)
Input:  34
Output: 1.11111     (34-32)*(5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
   double dcelsius=0.0;
   dcelsius =((fTemp-32)*(0.55555556));
   return dcelsius;
}

int main()
{
   float fValue=0.0;
   double dRet=0.0;

   printf("Enter temperature in Fahernheit\n");
   scanf("%f",&fValue);

   dRet=FhtoCs(fValue);
   printf("Temperture in celsius is:%lf\n",dRet);
   
   return 0;
}   