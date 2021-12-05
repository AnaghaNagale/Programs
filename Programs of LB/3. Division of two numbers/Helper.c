#include"Header.h"

//////////////////////////////////////////////////////////////////////
//
// Function Name:         Division
// Input Arguments:       Integer,Integer
// Output:                Floating point number
// Descrption:            It is used to perform division of 2 numbers
// Author Name:           Anagha Rajendra Nagale
// Date:                  19 August 2021
//
//////////////////////////////////////////////////////////////////////

double Division(
                   int iNo1,     //First input argument              10
			       int iNo2      //Second input argument             2
			)
{
	double dAns=0.0;        //Local variable to store division
	
	if(iNo2==0)          //Input Validation
	{
		return 0.0;
	}

	dAns=(double)iNo1 / (double)iNo2;   //Typecasting

	return dAns;       //Return the value to the caller    5.0
}	
