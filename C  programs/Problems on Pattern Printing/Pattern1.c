/* Write a program accept number from user and Display below pattern.

Input: 5
Output: * * * * *

Input: -2
Output: * * 

Input: 5
Output: * * * * * * *

Input: 4
Output: * * * *

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
// Function Name :    Display
// Input :            Integer
// Output :           None
// Description :      It is used to display pattern
// Date:              1st Sep 2021
//
/////////////////////////////////////////////////////////////

void Display(int iNo)
{
   int iCnt=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     printf("*\t");
   }
}

int main()
{
   int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}   
   
