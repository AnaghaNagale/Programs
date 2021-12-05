/* Write a program which accept number from user and check pallindrome,reverse the number.

Input: 121
Output: 121

*/

#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
bool CheckPalindrome(int);

int main()
{
   int iValue=0;
   bool bRet=false;

   printf("Enter number\n");
   scanf("%d",&iValue);

   bRet=CheckPalindrome(iValue);

   if(bRet==true)
   {
      printf("Number is pallindrome\n");
   }
   else
   {
      printf("Number is not pallindrome\n");
   }
   return 0;
}   

bool CheckPalindrome(int iInput)
{
  int iNumber=0;

  iNumber=Reverse(iInput);
  if(iNumber==iInput)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int Reverse(int iNo)
{
   int iDigit=0,iRev=0;

   while(iNo!=0)
   {
      iDigit=iNo%10;
      iRev=(iRev*10)+iDigit;
      iNo=iNo/10;
   }
   return iRev;
}   