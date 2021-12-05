#include"Header.h"

////////////////////////////////////////////////////////////////////////////
//
// Function Name:         SumOfFactors
// Input Arguments:       Integer
// Output:                Integer
// Descrption:            It is used to perform the addition of the factors
// Author Name:           Anagha Rajendra Nagale
// Date:                  29 August 2021
//
//////////////////////////////////////////////////////////////////////////

int SumOfFactors(int iValue)
{
   int iSum=1;               //Used to store the addition of factors
   int iCnt=0;              // Used for loop counter     

   //Filter
   if(iValue==0)            //If the input number is 0
   {
      return 0;
   } 

    //Input Updater  
   if(iValue<0)            //If the input is negative
   {
     iValue=-iValue;       // Convert the neagtive number into positive number
   }

   //    1       2          3
   for(iCnt=2;iCnt<iValue/2;iCnt++)                 //O(N/2)
   {
      if((iValue%iCnt)==0)                       //iCnt is a factor    //4
	  {
	     iSum=iSum+iCnt;
	  }
   }
   return iSum;
}

/////////////////////////////////////////////////////////
//
// Time Complexity : 0(N/2)
// Where N is the input for our appliaction.
//
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//
// Function Name:         ChkPerfect
// Input Arguments:       Integer
// Output:                Boolean
// Descrption:            It is used to perform the addition of the factors
// Author Name:           Anagha Rajendra Nagale
// Date:                  30 August 2021
//
//////////////////////////////////////////////////////////////////////////

//Istri wala to dryclean

int ChkPerfect(int iValue)
{
   int iRet=0;             

   //Input Updater  
   if(iValue<0)            //Updater for the negative values
   {
     iValue=-iValue;       // Convert the neagtive number into positive number
   }

   if((iValue==1)||(iValue==0))
   {
     return FALSE;
   } 

   iRet= ChkPerfect(iValue);

   if(iRet==iValue)
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   } 
  
}










