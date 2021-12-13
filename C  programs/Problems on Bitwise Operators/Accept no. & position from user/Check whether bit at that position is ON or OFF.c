/* Write a program which accept one number from user and position from user and check whether bit at that position 
   is ON or OFF .It bit is one return TRUE otherwise return FALSE.

Input :  10
          2
Output :  TRUE  

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;     // 0000 0000 0000 0000 0000 0000  0000  0001
	UINT iResult=0;

	if((iPos < 1)||(iPos >32))         //Filter
	{
		return false;
	}	

	iMask=iMask << (iPos-1);
	iResult=iNo&iMask;
	if(iResult==iMask)
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
    UINT iValue=0,iBit=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Enter postion\n");
	scanf("%d",&iBit);

	bRet=CheckBit(iValue,iBit);

	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
    else
    {
        printf("Bit is OFF\n");
    }
    
	return 0;
}	