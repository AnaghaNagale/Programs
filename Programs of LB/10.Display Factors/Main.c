/*
    Problem Statement: Accept the number from user and display factors of that number.

                       Input: 8          Output: 1 2 4

*/

/*
    Algorithm :

    START
               Accept number from user and store into the variable Value
              
	           Create one counter as Cnt and initialise to 0
	           
	           Iterate till the counter is less than the number i.e Value

	             Check whether the Cnt divides the Value completetly
	               if yes
	                   then display the counter
	               increment the value of counter by 1
	                   
	           continue to the iteration
   END
*/

#include "Header.h"

int main()                       //Address of entry point fuction
{
  int iNo=0;

  printf("Enter number\n");
  scanf("%d",&iNo);

  DisplayFactors(iNo);          //Function call

  return 0;
}




