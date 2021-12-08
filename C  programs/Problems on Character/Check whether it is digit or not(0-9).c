/* Accept Character from user and Check whether it is Digit or not (0-9).

Input: 7
Output: TRUE

Input: d
Output:FALSE   

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
	int iDigit=0;
	if((ch>='0')&&(ch <='9'))
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
    char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter the Character\n");
	scanf("%c",&cValue);

	bRet=ChkDigit(cValue);
	if(bRet==TRUE)
	{
		printf("It is Digit\n");
	}
    else
    {
       printf("It is not a Digit\n");
    }
    
	return 0;
}	
      