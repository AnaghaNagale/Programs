/*
    Problem Statement: Write a program which accept number from user and return the number of digits from that number.

    Input: 3456   Output: 4
    Input: 0      Output: 0
    Input: -34    Output: 2
    Input: 431    Output: 3
    Input: 6      Output: 1
*/

/*
    Algorithm:

    START
         Start one number as no
         Create one counter as Cnt and initialise to 0

         Iterate till the no is not equal to 0
            divide the no by 10 and store the result in no itself
            increment the counter by 1
         Continue
         
         return the value of counter
    END
*/             

#include "Header.h"

int main()                                         //Address of entry point function
{
  int iValue=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet= CountDigits(iValue);                       //Function call     

  printf("Number of digits are: %d\n",iRet);

  return 0;                                        //return to os
}


/*

Input : 7521

7521/10    ->     752      1
752/10     ->     75       2
75/10      ->     7        5
7/10       ->     0        7

*/