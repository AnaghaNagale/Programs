/*
    Problem Statement: Accept the number from user and return the addition of factors of that number.

                       Input: 10       Output: 8 ( 1 + 2 + 5)
                       Input: 12       Output: 16 ( 1 + 2 + 3 +4 + 6) 
                       Input: 11       Output:  1(1)

*/

/*
    Algorithm :

    START
             Accept number from user and store into the variable Value
              
	           Create one counter as Cnt and initialise to 1
	           Create one variable to store the addition as Ret

	           Iterate till the counter is less than the number/2 i.e Value/2

	             Check whether the Cnt divides the Value completetly
	               if yes
	                   then add the value of Cnt into the Ans
	               increment the value of counter by 1
	                   
	           continue to the iteration

             return the value of Ret
   END
*/

#include "Header.h"

int main()                       //Address of entry point fuction
{
  int iNo=0;
  
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iNo);

  iRet= SumOfFactors(iNo);        //Function call
 
  printf("Addition of factors is: %d\n",iRet);

  return 0;
}




