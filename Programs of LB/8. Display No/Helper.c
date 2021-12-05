#include"Header.h"

///////////////////////////////////////////////////////
//
// Function Name:         DisplayNumber
// Input Arguments:       Integer
// Output:                Integer
// Descrption:            It is used to display number
// Author Name:           Anagha Rajendra Nagale
// Date:                  25 August 2021
//
//////////////////////////////////////////////////////

void DisplayNumber(int iValue)  // signed int  //Defination         
{  
  int i=0;
  
  if(iValue==0)      //Filter
  {
	printf("Your entered number is:0\n");
	return;
  }	
  
  if(iValue<0)
  {
    iValue=-iValue;  //Input updater
  }
  
  
//      1   2   3  
  for(i=1;i<=iValue;i++)
  {
     printf("%d\n",i);   //4
  }
}
