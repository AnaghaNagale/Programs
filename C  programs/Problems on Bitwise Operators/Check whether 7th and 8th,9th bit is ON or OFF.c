//Write a program which checks whether 7th and 8th and 9th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask=0x000001C0;                 // 0000 0000 0000 0000 0000 0001  1100 0000
	                                      //   0    0    0    0   0     1     C      0
							              //   0x000001C0
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
		printf("7th & 8th & 9th bit is ON\n");
	}
    else
    {
        printf("Bits is OFF\n");
    }
    
	return 0;
}	
   