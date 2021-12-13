/*  Write a program which accept string from user and accept one Character.Return index of last occurrence of that Character in string.
Input: "Marvellous Multi OS"
        M
Output:11
Input: "Marvellous Multi OS"
        w
Output: -1   
Input: "Marvellous Multi OS"
        e
Output: 4     
*/   

#include<stdio.h>

int LastChar(char *str,char ch)
{
	int i=0;
	int iTemp=-1;

	if(str==NULL)  //Filter
	{
		return 0;
	}

	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			iTemp=i;
		}
		i++;
    }
    return iTemp;
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

	iRet=LastChar(Arr,cValue);

	printf("Character loaction is %d\n",iRet);
    return 0;
}	
    