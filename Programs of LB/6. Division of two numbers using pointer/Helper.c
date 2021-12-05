#include"Header.h"          //Header file inclusion

///////////////////////////////////////////////////////////////////
//
// Function Name:         Division
// Input Arguments:       Integer,Integer,Address of double
// Output:                BOOLEAN
// Descrption:            It is used to [perform division
// Author Name:           Anagha Rajendra Nagale
// Date:                  24 August 2021
//
//////////////////////////////////////////////////////////////////

//Function Defination
BOOLEAN Division(
                   int iValue1,     //First number
                   int iValue2,     //Second number
                   double *pData    //Address of empty variable
                )      
{
	double dRet=0.0;                //Local variable to store division

	if(iValue2==0)                  //Input Validation
	{
		return FALSE;               //Return FALSE as a failure
	}
	
	dRet=(double)iValue1/(double)ivalue2;	   //Typecasting

	*pData=dRet;                               //Store the value in the empty variable through pointer

	return TRUE;                               //Return the true as a success
}