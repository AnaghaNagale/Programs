/* Write a program which accept number from user and return the multiplication of all digits.

Input:2395
Output: 270

Input:-1018
Output:8

*/

#include<stdio.h>

int MultDigits(int iNo)
{
  int iMult=1;
  int iDigit=0;
  
  if(iNo<0)   //Input Updater
  {
     iNo=-iNo;
  }	 

  while(iNo>0)
  {  
     iDigit=iNo%10;   
     iNo=iNo/10;   
     if(iDigit==0)
     {
        iDigit=1;
     }
     iMult=iMult*iDigit;	 
  }
  return iMult;
}

int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter number\n");
   scanf("%d",&iValue);

   iRet=MultDigits(iValue);
   
   printf("%d",iRet);

   return 0;
}   
