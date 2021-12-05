#include "Header.h"

////////////////////////////////////////////////////////////////////////////
//
// Function Name:         ChkPerfect
// Input Arguments:       Integer
// Output:                Boolean
// Descrption:            It is used to whether number is perfect or not
// Author Name:           Anagha Rajendra Nagale
// Date:                  30 August 2021
//
//////////////////////////////////////////////////////////////////////////

//Optimised code with backword traversal

BOOL ChkPerfect(int iValue)
{
   int iCnt=0;
   int iSum=1;             

   //Input Updater  
   if(iValue<0)            //Updater for the negative values
   {
     iValue=-iValue;       // Convert the neagtive number into positive number
   }

   if((iValue==1)||(iValue==0))        //Filter
   {
     return FALSE;
   } 

   //iRet=SumOfFactors(iValue);
   //     1        2            3
   for(iCnt=iValue/2;iCnt>=2;iCnt--)        //Reverse loop //6 5 4 3 2 <----> 2 3 4 5 6
   {
      //4
      if((iValue % iCnt)==0)
      {
        iSum=iSum+iCnt;
      }

      if(iSum > iNo)  
      {
        break;
      }  
   }

   if(iSum==iValue)
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   } 
  
}

/////////////////////////////////////////////////////////
//
// Time Complexity : 0(N/2)
// Where N is the input for our appliaction.
//
////////////////////////////////////////////////////////




