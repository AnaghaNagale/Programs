/* Write a program which accept one number from user and ON its first 4 bits. Return modified number.

Input: 73
Output: 79 

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask= 0x0000000F;                 // 0000  0000  0000  0000  0000  0000   0000  1111
	                                      //   0    0       0     0    0      0       0    F
							              //   0x0000000F
	UINT iResult=0;
	iResult=iNo|iMask;
	if(iResult==iMask)

    return iResult;	
}

int main()
{
    UINT iValue=0;
	UINT bRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=OnBit(iValue);

    printf("Modified number is: %d\n",bRet);
    
	return 0;
}	
   