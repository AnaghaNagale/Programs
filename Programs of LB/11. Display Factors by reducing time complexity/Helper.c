#include"Header.h"

////////////////////////////////////////////////////////////
//
// Function Name:         DisplayFactors
// Input Arguments:       Integer
// Output:                None
// Descrption:            It is used to display the factors
// Author Name:           Anagha Rajendra Nagale
// Date:                  28 August 2021
//
///////////////////////////////////////////////////////////

void DisplayFactors(int iValue)
{
   int iCnt=0;              //Loop counter     0 1 2 3 4 5 6 ___________
   if(iValue<0)             //Updater
   {
     iValue=-iValue;
   }

   // Sequence of loop 1 2 4 3 2 4 3 2 4 3 2 4 3 2 4.......

   //    1       2          3
   for(iCnt=1;iCnt<iValue/2;iCnt++)                 //O(N/2)
   {
      if((iValue%iCnt)==0)                       //iCnt is a factor    //4
	  {
	     printf("%d\n",iCnt);
	  }
   }
}

/////////////////////////////////////////////////////////
//
// Time Complexity : 0(N/2)
// Where N is the input for our appliaction.
//
////////////////////////////////////////////////////////

// Output:  1 2 4

/*

Input: 8   store into iValue

//Sequence approach
if(iValue % 1 == 0)      -> printf(1)
if(iValue % 2 == 0)      -> printf(2) 
if(iValue % 3 == 0)
if(iValue % 4 == 0)      -> printf(4) 
if(iValue % 5 == 0)
if(iValue % 6 == 0)
if(iValue % 7 == 0)

*/












