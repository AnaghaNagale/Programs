/* Write a recursive program which accept string from user and count white spaces.

Input : HE llo WOr lD
Output : 3

*/

#include<iostream>
using namespace std;

int WhiteSpaceI(char *str)
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

int WhiteSpaceR(char *str)
{
	static int iCnt=0;
	if(str==NULL)  //Filter
	{
		return 0;
	}
	if(*str!='\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
        str++;
		WhiteSpaceR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
	int iRet=0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet=WhiteSpaceI(Arr);
	cout<<"White spaces are : "<<iRet<<"\n";
	
    iRet=WhiteSpaceR(Arr);
	cout<<"White spaces are : "<<iRet<<"\n";
	
	return 0;
}	