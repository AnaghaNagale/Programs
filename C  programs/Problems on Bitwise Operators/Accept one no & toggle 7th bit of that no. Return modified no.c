/* Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

Input: 137
Output: 201 

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask= 0x00000040;                 // 0000  0000  0000  0000  0000  0000   0100  0000
	                                      //   0    0       0     0    0      0      4    0
							              //   0x00000040
	UINT iResult=0;
	iResult=iNo^iMask;
	if(iResult==iMask)

    return iResult;	
}

int main()
{
    UINT iValue=0;
	UINT bRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=ToggleBit(iValue);

    printf("Modified number is: %d\n",bRet);

	return 0;
}	
   