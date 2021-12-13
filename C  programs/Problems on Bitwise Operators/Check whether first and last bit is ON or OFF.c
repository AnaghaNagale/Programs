//Write a program which checks whether first and last bit is ON or OFF.First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
	UINT iMask=0x80000001;                 //1000 0000 0000 0000 0000 0000  0000 0001
	                                      //  8   0    0    0      0   0     0   1
							              //   0x80000001
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
		printf("First and Last bit is ON\n");
	}
    else
    {
        printf("Bits is OFF\n");
    }
    
	return 0;
}	
   