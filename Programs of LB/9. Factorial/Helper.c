#include"Header.h"

//////////////////////////////////////////////////////////////////////
//
// Function Name:         Factorial
// Input Arguments:       Integer
// Output:                Integer
// Descrption:            It is used to print the number of Factorial
// Author Name:           Anagha Rajendra Nagale
// Date:                  26 August 2021
//
//////////////////////////////////////////////////////////////////////

int Factorial(int iValue)                 //Defination
{
    int iFact=1;
	int iCnt=0;
	
	if(iValue<0)                          //Updater
	{
		iValue=-iValue;
	}	
	
	//     1        2         3
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
	   iFact=iFact*iCnt;      //4
	}
	
	return iFact;
}	