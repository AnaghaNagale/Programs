/* write a program which accept width and height of rectangle from user and calculate its area.(Area=Width*Height)
Input:  5.3  9.78
Output:  51.834
*/

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
	if(fWidth<0)
	{
		fWidth=-fWidth;
  }
	if(fHeight<0)
	{
		fHeight=-fHeight;
	}	
  double dArea=0.0;
	dArea=fWidth*fHeight;
	return dArea;
}

int main()
{
   float fValue1=0.0, fValue2=0.0;
   double dRet=0.0;

   printf("Enter Width\n");
   scanf("%f",&fValue1);

   printf("Enter Height\n");
   scanf("%f",&fValue2);

   dRet=RectArea(fValue1,fValue2);
   printf("Area of Rectangle is:%f\n",dRet);
   
   return 0;
}  