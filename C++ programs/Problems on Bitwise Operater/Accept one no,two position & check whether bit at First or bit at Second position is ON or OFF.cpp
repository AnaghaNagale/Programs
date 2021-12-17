/* Write a program which accept one number,two position from user and check whether bit at First or bit at Second position is ON or OFF
   without using % and / operator.

Input:  10 
        3   7
Output: TRUE

*/

#include<iostream>
using namespace std;
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo,int iPos1,int iPos2)
{
	if (iNo^ (0x00000001 <<(iPos1-1))|(0x00000001 <<(iPos2-1)))
	{
        return true;
    }
    else
    {
		return false;
	}	
}	

int main()
{
	UINT iValue=0;
	bool bRet=false;
	UINT i=0;
	UINT j=0;

	cout<<"Enter number\n";
	cin>>iValue;

	cout<<"Enter the first position of bit\n";
	cin>>i;

	cout<<"Enter the second position of bit\n";
	cin>>j;

	bRet=ChkBit(iValue,i,j);

	if(bRet==true)
	{
		cout<<"1st and 2nd bit is ON\n";
	}
    else
    {
        cout<<"1st and 2nd bit is OFF\n";
    }
    
	return 0;
}	
