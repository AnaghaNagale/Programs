/*  Write a program accept number from user and Display below pattern.

Input : 5
Output: $ * $ * $ * $ * $ *

Input: -2
Output:  $ * $ *

*/

#include<stdio.h>

void Pattern(int iNo)
{
  int iCnt=0;
  
  ig(iNo==0)
  {
    return;
  }

  if(iNo<0)
  {
     iNo=-iNo;
  }
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
	 printf(" $* ");
  }	
}

int main()
{
  int iValue=0;

  printf("Enter number of elements\n");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;
}  
  