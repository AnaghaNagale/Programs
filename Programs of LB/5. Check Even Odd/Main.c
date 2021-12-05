/*
    Problem Statement: Accept number from user and check whether the number is even or odd.
*/

/*
    Srep 1:  Understand the problem statement
    Step 2:  Write the algorithm
    Step 3:  Decide the programming laguage
    Step 4:  Write the program
    Step 5:  Test the Program
 */   

/*
    Algorithm
  
    START

        Accept number as No
        
        Divide the No by 2 and store the remainder into result
        If the result is Zero
            Then return Even
        Otherwise
            return Odd    

    STOP	
*/

#include"Header.h"      //Header file inclusion

//Entry point function from where excution starts
int main()
{
	int iValue=0;                           //Local variable
	BOOLEAN bRet=FALSE;                     //Local variable  

	printf("Enter number\n");              //Display on screen
	scanf("%d",iValue);                    //Acept the input from keyboard

	bRet=ChkEvenOdd(iValue);               //Function call
	//bRet=ChkEvenOdd(18);

	if(bRet==TRUE)                         //If number is Even
	{
		printf("Number is Even\n");
	}
	else                                   //If number is Odd
	{
		printf("Number is Odd\n");
	}

	return 0;	                            //Return success to os
}


/*

Return value of main
0    Success 
1    Aborative exit/Failure
-1   Erronius exit

*/
