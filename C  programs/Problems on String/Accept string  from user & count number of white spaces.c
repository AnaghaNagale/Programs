/* Write a program which accept string from user and count number of white spaces.

Input : "MarvellouS"
Output :0    

Input : "Marvellous Infosystem"
Output :   1       

Input : "Marvellous Infosystem by piyush manohar khairnar"
Output :   5  

*/

#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt=0;

	if(str==NULL)  //Filter
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
	int iRet=0;

	printf("Enter String\n");
	scanf(" %[^'\n']s",Arr);

    iRet=CountWhite(Arr);
	printf("%d\n",iRet);
	
	return 0;
}	