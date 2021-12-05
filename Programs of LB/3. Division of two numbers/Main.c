/*
    Problem Statement: Accept two  numbers from user and perform the division.
*/

/*
    Algorithm
  
    START

        Accept first number as No1
        Accept second number as No2

	    Create one variable as Ans

	    Perform division of No1 & No2
	    Store the result in Ans

	    Return the value from Ans

    STOP	
*/

#include"Header.h"                      //User defined header file inclusion

int main()                              //Entry point function
{  
	int iValue1=0;                      //Local variables
	int iValue2=0;
	double dRet=0.0;     
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);               //Accepting the input   10
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);               //Accepting the input  2
	
	dRet=Division(iValue1,iValue2);     //Function call         Division(10,2)
	
	printf("Division of two numbers is:%lf\n",dRet);

	return 0;                           //Return success to os
}	
	