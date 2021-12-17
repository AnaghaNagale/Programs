/* Write a program which accept one number from user and range of positions from user.Toggle all bits from that range.

Input: 897
iStart:  9  
iEnd:  13

Toggle all bits from position 9 to 13 of input number is 897.

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
	UINT iMask1=0XFFFFFFFF;
	UINT iMask2=0xFFFFFFFF;
	UINT iMask=0;
	UINT iResult=0;
	
	iMask1=iMask1<<(iStart-1);
	iMask2=iMask2>>(32-iEnd);
	iMask=iMask1&iMask2;
	
	iResult=iNo^iMask;
	return iResult;
}	

int main()
{
	UINT iValue=0;
    UINT iRet=0,i,j;

	cout<<"Enter number\n";
	cin>>iValue;

	cout<<"Enter Strating position\n";
	cin>>i;

	cout<<"Enter Ending position\n";
	cin>>j;

	iRet=ToggleBitRange(iValue,i,j);

	cout<<"Updated number is: "<<iRet<<"\n";
	
	return 0;
}	