/* Accept Character from user and Check whether it is Capital or not (A-Z).
Input: F
Output: TRUE
Input: d
Output:FALSE   
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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

	bRet=ChkCapital(cValue);
	if(bRet==TRUE)
	{
		printf("It is Capital Character\n");
	}
    else
    {
       printf("It is not a  Capital Character\n");
    }
    
	return 0;
}	
      