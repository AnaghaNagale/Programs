/* Write a program which accept two numbers from user and return power of number.(with  updater)
Input: -2^-3
Output:2*2*2  =  8
*/

#include<stdio.h>

int Power(int ,int);

int main()
{
  int iValue1=0,iValue2=0,iRet=0;
  
  printf("Enter first number\n");
  scanf("%d",&iValue1);
  
  printf("Enter second number\n");
  scanf("%d",&iValue2);
  
  iRet=Power(iValue1,iValue2);
  
  printf("Result is:%d\n",iRet);
  return 0;
}


int Power(int x,int y)     //o(N)
{
    int iMult=1,iCnt=0;  

	if(x<0)
	{
	  x=-x;
	}
	if(y<0)
	{
	  y=-y;
	}  
	
	//    1        2     3
	for(iCnt=1;iCnt<=y;iCnt++)
	{
	   iMult=iMult*x;   //4
	}
    return iMult;
}	