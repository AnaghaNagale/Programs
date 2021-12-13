/* Write a program which accept one number from user and toggle contents of first and last nibble of the number.
  Return modified number.(Nibble is agroup of 4 Bits)   */
		  

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
	UINT iMask=0xF000000F;     // 1111 0000 0000 0000 0000 0000  0000  1111
	                           //   F    0    0   0    0    0     0     F
							   //  0xF000000F
	
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