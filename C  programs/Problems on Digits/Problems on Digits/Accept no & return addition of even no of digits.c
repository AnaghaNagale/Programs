/* Write a program  which accept number from user and return addition of even number of digits. 

Input: 3718
Output: 9

Input: 2395
Output: 2

*/

//Header file inclusion
#include<stdio.h>

int SumEven(int iNo)     //Function Defination
{
  int iSum=0;
  int iDigit=0;

  if(iNo<0)             //Input Updater
  {
    iNo=-iNo;
  }
  while(iNo>0)       
  {
     iDigit=iNo%10;
	 if((iDigit%2)==0)
	 {
	   iSum=iSum+iDigit;
	 }
     iNo=iNo/10;
  }
  return iSum;
}

int main()
{
    int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumEven(iValue);    //Function Call

	printf("Sum of even digit are:%d",iRet);
	
	return 0;
}	