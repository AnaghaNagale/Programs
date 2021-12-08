/* Accept Character from user and Check whether it is Small case or not (a-z).

Input: g
Output: TRUE

Input: D
Output:FALSE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if((ch>='a')&&(ch<='z'))
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

	bRet=ChkSmall(cValue);
	if(bRet==TRUE)
	{
		printf("It is Small case Character\n");
	}
    else
    {
       printf("It is not a Small case Character\n");
    }

	return 0;
}	
      