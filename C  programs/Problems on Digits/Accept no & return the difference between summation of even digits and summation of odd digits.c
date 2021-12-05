/* Write a program which accept number from user and return the difference between summation of even digits and summation of odd digits

Input:2395
Output: -15  (2 - 17)

Input:-1018
Output:6 (8 - 2)

*/

#include<stdio.h>

int CountDiff(int iNo)
{
  int iDiff=0;
  int iDigit=0;
  int iSumEven=0;
  int iSumOdd=0;
  
  if(iNo<0)   //Input Updater
  {
     iNo=-iNo;
  }	 

  while(iNo>0)
  {  
     iDigit=iNo%10;   
	 if((iDigit%2)==0)
	 {
		iSumEven=iSumEven+iDigit;
	 }
     else 
     {
        iSumOdd=iSumOdd+iDigit;
     }		
     iNo=iNo/10;   
  }

  iDiff=iSumEven-iSumOdd;
  return iDiff;
}

int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter number\n");
   scanf("%d",&iValue);

   iRet=CountDiff(iValue);

   printf("%d",iRet);
   
   return 0;
}   
