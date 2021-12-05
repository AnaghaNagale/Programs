#include"Header.h"          //Header file inclusion

/////////////////////////////////////////////////////////////////////
//
// Function Name:         ChkEvenOdd
// Input Arguments:       Integer
// Output:                BOOLEAN
// Descrption:            It is used to check number is even or odd
// Author Name:           Anagha Rajendra Nagale
// Date:                  21 August 2021
//
////////////////////////////////////////////////////////////////////

//Function Defination
BOOLEAN ChkEvenOdd(int iNo)      //Input of the function
{
	int iResult=0;               //Local variable

	iResult=iNo % 2;             //Mod opertor which returns remainder after division

	if(iResult==1)               //If remainder is 1 means number is odd
	{
		return FALSE;            //FALSE indicates number is odd 0
	}
	else
	{
		return TRUE;            //TRUE indicates number is even 1
	}	
}