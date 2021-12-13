/*  Write a program which accept string from user and accept one Character.Check whether that Character is present or not.

Input: "Marvellous Multi OS"
         e 
Output: TRUE

Input: "Marvellous Multi OS"
        w
Output: FALSE  

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
	while(*str!='\0')
	{
		if(*str==ch)
		{
			return TRUE;
		}
		str++;
    }
}

int main()
{
    char Arr[20];
    char cValue='\0';
    BOOL bRet=FALSE;

	printf("Enter string: \n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the Character: \n");
	scanf( " %c",&cValue);

	bRet=ChkChar(Arr,cValue);
	if(bRet==TRUE)
	{
		printf("Character found\n");
	}
    else
    {
       	printf("Character not found\n");	
	}

	return 0;
}	
    