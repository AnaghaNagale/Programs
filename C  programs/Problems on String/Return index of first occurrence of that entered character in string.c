/*  Write a program which accept string from user and accept one Character.Return index of first occurrence of that Character.
Input: "Marvellous Multi OS"
        M
Output: 0
Input: "Marvellous Multi OS"
        w
Output: -1   
Input: "Marvellous Multi OS"
        e
Output: 4       
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int i=0;
	int iCnt=0;

	if(str==NULL)  //Filter
	{
		return 0;
	}

	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			break;
		}
		i++;
    }
	if(str[i]==ch)
	{
        return i;
    }
    else
    {
	    return -1;
    }		  
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

	iRet=FirstChar(Arr,cValue);
	
	printf("Character loaction is %d\n",iRet);
    return 0;
}	
    