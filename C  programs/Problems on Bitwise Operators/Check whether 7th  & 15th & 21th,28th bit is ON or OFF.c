//Write a program which checks whether 7th and 15th and 21th , 28th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask= 0x08104040;                 // 0000 1000 0001 0000 0100 0000  0100 0000
	                                      //   0   8    1    0     4     0    4    0
							              //   0x08104040
	UINT iResult=0;
	iResult=iNo&iMask;
	if(iResult==iMask)
	{
		return TRUE;
	}
    else
    {
        return FALSE;
    }		
}

int main()
{
    UINT iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=CheckBit(iValue);

	if(bRet==TRUE)
	{
		printf("7th & 15th & 21th & 28th bit is ON\n");
	}
    else
    {
        printf("Bits is OFF\n");
    }

	return 0;
}	
   