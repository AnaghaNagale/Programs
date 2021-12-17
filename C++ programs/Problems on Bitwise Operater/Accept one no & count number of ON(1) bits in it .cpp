/* Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

Input:  11
Output:  3

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT i=0,iCnt=0,iResult=0;
	UINT iMask=0x00000001;

	for(i=1;i<32;i++)
	{
		iResult=iNo&iMask;
		if(iResult!=0)
		{
			iCnt++;
		}
        iMask=iMask<<1;                         
	}
	return iCnt;
}		

int main()
{
	UINT iValue=0;
	UINT iRet=0;

	cout<<"Enter number\n";
	cin>>iValue;

	iRet=CountOne(iValue);

	cout<<"Number of bits which are ON: "<<iRet<<"\n";
	
	return 0;
}	