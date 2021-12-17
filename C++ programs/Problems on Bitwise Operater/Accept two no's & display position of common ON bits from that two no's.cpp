/* Write a program which accept two numbers from user and display position of common ON bits from that two numbers  without using % and / operator.

Input:  10   15        (1010   1111)
Output: 2     4 

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
	UINT i=0,iCnt1=0,iCnt2=0,iResult1=0,iResult2=0;
	
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;

	for(i=1;i<32;i++)
	{
		iResult1=iNo1&iMask1;
		if(iResult1!=0)
		{
			iCnt1++;
		}
        iMask1=iMask1<<1;                         
	}
	for(i=1;i<32;i++)
	{
		iResult2=iNo2&iMask2;
		if(iResult2!=0)
		{
			iCnt2++;
		}
        iMask2=iMask2<<1;                         
	}
	
}	

int main()
{
	UINT iValue1=0;
	UINT iValue2=0;

	cout<<"Enter First number\n";
	cin>>iValue1;

	cout<<"Enter Second number\n";
	cin>>iValue2;

	CommonBits(iValue1,iValue2);

	cout<<"Two Numbers of position of common ON bits are: "<<"\t";

	return 0;
}	
