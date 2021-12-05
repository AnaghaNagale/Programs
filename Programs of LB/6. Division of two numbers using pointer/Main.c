/*
    Problem Statement: Accept two  numbers from user and return its division.
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
	int iNo1=0;                         //Local variables
	int iNo2=0;                         //Local variables
	double dAns=0.0;  
	BOOLEAN bRet=FALSE;   
	
	printf("Enter first number\n");
	scanf("%d",&iNo1);                 
	
	printf("Enter second number\n");
	scanf("%d",&iNo2);                 
	
	bRet=Division(iNo1,iNo2,&dAns);     //Function call        
	
	if(bRet==FALSE)
	{
		printf("Error :Invalid Input");
	}
	else
	{
		printf("Division of two numbers is: %lf\n",dAns);
	}	

	return 0;                           //Return success to os
}	
	