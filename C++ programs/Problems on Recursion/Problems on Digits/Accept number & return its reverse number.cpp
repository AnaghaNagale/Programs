/* Write a recursive program which accept number from user and return its reverse number. 

Input : 523
Output : 325

*/

#include<iostream>
using namespace std;

int ReverseI(int iNo)
{
  int iDigit=0;
  int iRev=0;
  if(iNo<0)    //Input Updater
  {
    iNo=-iNo;
  }
  while(iNo>0)
  {
     iDigit=iNo%10;
	 iRev=(iRev*10)+iDigit;
     iNo=iNo/10;
  }
  return iRev;
}


int ReverseR(int iNo)
{
   static int iDigit=0;
   static int iRev=0;
   if(iNo<0)    //Input Updater
   { 
      iNo=-iNo;
   }
   if(iNo>0)
   {
     iDigit=iNo%10;
	 iRev=(iRev*10)+iDigit;
     iNo=iNo/10;
	 ReverseR(iNo);
   }
   return iRev;
}
	
	
int main()
{
    int iValue=0;
	int iRet=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet=ReverseI(iValue);
	cout<<"Reverse number is: "<<iRet<<"\n";
	
	iRet=ReverseR(iValue);
	cout<<"Reverse number is: "<<iRet<<"\n";
	
	return 0;
}	 
   	