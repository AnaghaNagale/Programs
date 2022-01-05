/* Write a program accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
Input :   21
          Number is not even
Output :  24
          Number is even.
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Checkeven(int iNo)
{
  if((iNo%2)==0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
   int iValue=0;
   BOOL bRet=FALSE;
   
   printf("Enter number\n");
   scanf("%d",&iValue);
   
   bRet=Checkeven(iValue);
   
   if(bRet ==TRUE)
   {
     printf("Number is even\n");
   }
   else
   {
     printf("Number is not even\n");
   }	 
   return 0;
}   
  