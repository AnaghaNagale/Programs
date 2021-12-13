/* Write a program which accept string from user and count number of Captial Characters.

Input : "Marvellous Multi OS"
Output : 4    

*/

#include<stdio.h>

int CountCaptial(char *str)
{
	int iCnt=0;   

	if(str==NULL)  //Filter
	{
		return 0;
	}
	while(*str!='\0')
	{
	    if((*str>='A')&&(*str<='Z'))
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

	iRet=CountCaptial(Arr);
	printf("%d\n",iRet);

	return 0;
}	
   