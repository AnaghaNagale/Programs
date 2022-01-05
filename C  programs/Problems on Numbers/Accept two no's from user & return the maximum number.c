// Write aprogram which accept two numbers from user and Return the Maximum number.

#include<stdio.h>

int Maximum(int iNo1,int iNo2)
{
  int iResult=0;

	if(iNo1>iNo2)
	{
	   iResult=iNo1;
	}
    else
    {
       iResult=iNo2;
    }	   
   return iResult;
}    

int main()
{
  int iValue1=0,iValue2=0;
  int iRet=0;

  printf("Enter first number\n");
  scanf("%d",&iValue1);

  printf("Enter second number\n");
  scanf("%d",&iValue2);

  iRet=Maximum(iValue1,iValue2);
  printf("Maximum number is:%d\n",iRet);

  return 0;
}   