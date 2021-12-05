/* Write a program which accept number from user and return the reverse the number.

Input: 121
Output: 121

*/

//Header file inclusion
#include<stdio.h>

int Reverse(int iNo)     //Function Defination
{
  int iDigit=0;
  int iRev=0;
  if(iNo<0)             //Input Updater
  {
    iNo=-iNo;
  }
  while(iNo>0)
  {
     iDigit=iNo%10;
	 iRev=(iRev*10)+iDigit;
     iNo=iNo/10;
  }
  return iRev;
}

int main()
{
  int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);    //Function Call

	printf("Return the reverse number is:%d",iRet);
  
	return 0;
}	
	