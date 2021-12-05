#include"Header.h"

//////////////////////////////////////////////////////////////
//
// Function Name:         CountDigits
// Input Arguments:       Integer
// Output:                Integer
// Descrption:            It is used to count number of digits
// Author Name:           Anagha Rajendra Nagale
// Date:                  31 August 2021
//
//////////////////////////////////////////////////////////////

int CountDigits(int iNo)
		
{
	int iCnt=0;        
	
	while(iNo!=0)
	{
		iNo=iNo/10;
		iCnt++;
	}

	return iCnt;      
}	
