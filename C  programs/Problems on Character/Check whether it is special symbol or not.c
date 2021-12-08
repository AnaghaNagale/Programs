/* Accept Character from user.and check whether it is special Symbol or not.(!,@,#,$,%,^,&,*)
Input :%
Output : TRUE

Input : d
Output : FALSE               
*/             

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')|| (ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))
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

	printf("Enter  the Character\n");
	scanf("%c",&cValue);

	bRet=ChkSpecial(cValue);
	if(bRet==TRUE)
	{
		printf("It is a Special Character\n");
	}	
	else
    {
		printf("It is not a Special Character\n");
	}	

	return 0;
}	