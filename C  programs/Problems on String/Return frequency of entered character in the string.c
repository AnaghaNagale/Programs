/*  Write a program which accept string from user and accept one Character.Return frequency of that Character.
Input: "Marvellous Multi OS"
        M
Output: 2
Input: "Marvellous Multi OS"
        w
Output: 0        
*/

#include<stdio.h>

int CountChar(char *str,char ch)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
    }
	return iCnt++;
}

int main()
{
    char Arr[20];
    char cValue='\0';
	int iRet=0;

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the Character\n");
	scanf(" %c",&cValue);

	iRet=CountChar(Arr,cValue);
	
	printf("Character frequency is %d\n",iRet);
    return 0;
}	
    