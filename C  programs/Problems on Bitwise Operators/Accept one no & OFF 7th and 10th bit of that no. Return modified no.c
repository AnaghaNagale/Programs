/* Write a program which accept one number from user and OFF 7th and 10th bit of that number it is ON. Return modified number.

Input: 577
Output: 1  

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask= 0x00000240;                 // 0000  0000  0000  0000  0000  0010   0100  0000
	                                      //   0    0       0     0    0      2      4    0
							              //   0x00000240
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

	bRet=OffBit(iValue);

    printf("Modified number is: %d\n",bRet);
    
	return 0;
}	
   