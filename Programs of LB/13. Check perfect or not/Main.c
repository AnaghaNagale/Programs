/*
    Problem Statement: Accept the number from user and check whether that number is perfect or not.

                       Input: 6        Output: Perfect Number ( 1 + 2 + 5)
                       Input: 28       Output: Perfect Number ( 1 + 2 + 4 + 7 + 14) 
                       Input: 12       Output: Not a perfect number

*/

/*
    Algorithm :

    START
             Accept number from user and store into the variable Value
              
	           Create one counter as Cnt and initialise to 0
	           Create one variable to store the addition as Ans

	           Iterate till the counter is less than the number/2 i.e Value/2

	             Check whether the Cnt divides the Value completetly
	               if yes
	                   then add the value of Cnt into the Ans
	               increment the value of counter by 1
	                   
	           continue to the iteration

             if the Ans is same as the Value
                 then Value is the perfect number
             Otherwise
                 Value is not a perfect number   
   END
*/

#include "Header.h"

int main()                       //Address of entry point fuction
{
  int iNo=0;
  
  BOOL bRet=FALSE;

  printf("Enter number\n");
  scanf("%d",&iNo);

  bRet= ChkPerfect(iNo);        //Function call
 
  if(bRet==TRUE)
  {
     printf("It is a perfect number\n");
  } 
  else
  {
    printf("It is not a perfect number\n");
  } 

  return 0;
}




