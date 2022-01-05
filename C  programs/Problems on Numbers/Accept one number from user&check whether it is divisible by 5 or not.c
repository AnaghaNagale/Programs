/* Write a program accept one numbers and check whether it is divsible bt 5 or not.
Input :  23
Output : Not Divisible 5

Input :  45
Output : Divisible 5
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check (int iNo)
{
   if((iNo%5)==0)
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
   
   bRet=Check(iValue);
  
   if(bRet==TRUE)
   {
     printf("Divisible by 5\n");
   }
   else
   {
     printf("Not Divsible by 5\n");
   }
   return 0;
}   
   
   