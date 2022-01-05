/* Write a program accept two numbers from user & display first number in second number of times.
Input :    12 5
Output :   12 12 12 12 12
Input :    -2 0
Output :   -2 -2 -2
Input :    -2 3
Output :   -2 -2 -2
Input :    21 -3
Output :   21 21 21
*/

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
  int i =0;
  int iCnt=1;

  for(iCnt=1;iCnt<=iFrequency;iCnt++)
  {
    printf("%d\t",iNo);
  }
}  

int main()
{
   int iValue=0;
   int iCount=0;
   
   printf("Enter number\t");
   scanf("%d",&iValue);
   
   printf("Enter frequency\t");
   scanf("%d",&iCount);
   
   Display(iValue,iCount);
   return 0;
}   
   