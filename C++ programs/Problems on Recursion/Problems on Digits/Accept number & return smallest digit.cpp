/* Write a recursive program which accept number from user and return smallest digit.

Input : 87983
Output : 3

*/

#include<iostream>
using namespace std;

int MinI(int iNo)
{
   int iDigit=0;
   int iMin=0;
   
   iMin=iNo%10;
   while(iNo!=0)
   {
	   iDigit=iNo%10;
	   if(iDigit<iMin)
	   {
		   iMin=iDigit;
	   }
       iNo=iNo/10;
   }
    return iMin;   
}

int MinR(int iNo)
{
   static int iDigit=0;
   
   static int iMin=iNo%10;
   if(iNo!=0)
   {
	   iDigit=iNo%10;
	   if(iDigit<iMin)
	   {
		   iMin=iDigit;
	   }
       iNo=iNo/10;
	   MinR(iNo);
   }
   return iMin;   
}

int main()
{
    int iValue=0;
	int iRet=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet=MinI(iValue);
	cout<<"Minimum number is: "<<iRet<<"\n";
	
	iRet=MinR(iValue);
	cout<<"Minimum number is: "<<iRet<<"\n";
	
	return 0;
} 