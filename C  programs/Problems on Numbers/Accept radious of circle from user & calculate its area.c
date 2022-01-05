/* Write a program which accept radious of circle from user & calculate its area.
consider Value of PI as 3.14(Area = PI*Radious*Radious)   Area of circle
Input: 5.3
Output: 88.2026
Input: 10.4
Output: 339.6224
*/

#include<stdio.h>

double CircleArea(float fRadious)
{
   float fPI=3.14;
   double Area=0.0;

   if(fRadious<0)
   {
	   fRadious=-fRadious;
   }   
   Area= fPI * fRadious * fRadious;
   return Area;
}

int main()
{
   float fValue=0.0;
   double dRet=0.0;

   printf("Enter radious\n");
   scanf("%f",&fValue);

   dRet=CircleArea(fValue);
   printf("Area of circle is:%f\n",dRet);

   return 0;
}   