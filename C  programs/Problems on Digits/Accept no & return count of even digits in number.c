/* Write a program which accept number from user and return  the count of even digits.

Input: 1018
Output: 2

Input: 2395
Output: 1

Input: -1018
Output:  2

Input: 8462
Output: 4

*/

//Header file inclusion
#include<stdio.h>

int CountEven(int iNo)     //Function Defination
{
  int iCnt=0;
  int iDigit=0;
  if(iNo==0)    //Filter
  {
    return 1;
  }
  if(iNo<0)    //Input Updater
  {
    iNo=-iNo;
  }
  while(iNo>0)      
  {
     iDigit=iNo%10;
	 if((iDigit%2)==0)
	 {
	   iCnt++;
	 }
     iNo=iNo/10;
  }
  return iCnt;
}

int main()
{
  int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);    //Function Call
  
	printf("Number of even digit is:%d",iRet);
	return 0;
}	
	
  
	