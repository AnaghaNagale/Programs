//Write a program which checks whether 15th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask=0x00004000;                 // 0000 0000 0000 0000 0100 0000   0000  0000
	                                      //   0    0    0   0     4    0      0    0
							              //   0x00004000
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
		printf("15th bit is ON\n");
	}
    else
    {
        printf("15th bit is OFF\n");
    }
    
	return 0;
}	
   