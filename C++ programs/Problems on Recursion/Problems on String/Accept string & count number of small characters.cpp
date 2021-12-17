/* Write a recursive program which accept string from user and count number of small characters.

Input : HElloWOrlD
Output : 5

*/

#include<iostream>
using namespace std;

int SmallI(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
	    if((*str>='a')&&(*str<='z'))
		{
		    iCnt++;
		}
        str++;		
    }
    return iCnt;	
}

int SmallR(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
	    if((*str>='a')&&(*str<='z'))
		{
		    iCnt++;
		}
        str++;
		SmallR(str);
	}		
    return iCnt;	
}
	
int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet=SmallI(Arr);
	cout<<"Small characters are: "<<iRet<<"\n";
	
	iRet=SmallR(Arr);
	cout<<"Small characters are: "<<iRet<<"\n";
	
	return 0;
}	
