/* Accept Character from user and Check whether it is Alaphabet or not (A-Z ,a-z).
Input: F
Output: TRUE
Input: &
Output:FALSE   
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if(((ch>='A')&&( ch<='Z'))||((ch>='a')&&( ch<='z')))
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

	bRet=ChkAlpha(cValue);
	if(bRet==TRUE)
	{
		printf("It is Character\n");
	}
    else
    {
       printf("It is not a Character\n");
    }
    
	return 0;
}	
      