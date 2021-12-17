/* Write a recursive program which accept number from user and return largest digit.

Input : 87983
Output : 9

*/

#include<iostream>
using namespace std;

int MaxI(int iNo)
{
   int iDigit=0;
   int iMax=0;
   
   iMax=iNo%10;
   while(iNo!=0)
   {
	   iDigit=iNo%10;
	   if(iDigit>iMax)
	   {
		   iMax=iDigit;
	   }
       iNo=iNo/10;
   }
    return iMax;   
}

int MaxR(int iNo)
{
   static int iDigit=0;
   
   static int iMax=iNo%10;
   if(iNo!=0)
   {
	   iDigit=iNo%10;
	   if(iDigit>iMax)
	   {
		   iMax=iDigit;
	   }
       iNo=iNo/10;
	   MaxR(iNo);
   }
   return iMax;   
}

int main()
{
    int iValue=0;
	int iRet=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet=MaxI(iValue);
	cout<<"Maximum number is: "<<iRet<<"\n";
	
	iRet=MaxR(iValue);
	cout<<"Maximum number is: "<<iRet<<"\n";
	
	return 0;
} 