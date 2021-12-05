/*
    Problem Statement: Accept two  numbers from user and perform the addition.
*/

/*
    Algorithm
  
    START

        Accept first number as No1
        Accept second number as No2

	    Create one variable as Ans

	    Perform addition of No1 & No2
	    Store the result in Ans

	    Return the value from Ans

    STOP	
*/

#include"Header.h"                      //User defined header file inclusion

int main()                              //Entry point function
{  
	int iValue1=0;                      //Local variables
	int iValue2=0;
	int iRet=0;     
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);               //Accepting the input   10
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);               //Accepting the input   11
	
	iRet=Addition(iValue1,iValue2);     //Function call   Addition(10,11)
	
	printf("Addition is:%d\n",iRet);

	return 0;                           //Return success to os
}	
	