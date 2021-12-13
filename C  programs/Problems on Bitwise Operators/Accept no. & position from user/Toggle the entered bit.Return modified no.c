/* Write a program which accept one number from user and position from user and toggle that bit 
  Return modified number.

Input :  10
          3
Output :  14  

*/		  

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;     // 0000 0000 0000 0000 0000 0000  0000  0001
	UINT iResult=0;
	
	iMask=iMask << (iPos-1);
	iResult=iNo|iMask;
    return iResult;
}

int main()
{
    UINT iValue=0,iBit=0;
	UINT bRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter postion\n");
	scanf("%d",&iBit);

	bRet=ToggleBit(iValue,iBit);

	printf("Modified number is: %d\n",bRet);
	
	return 0;
}	