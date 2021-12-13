/* Write a program which accept string from user and return difference between frequency of  Small Characters and frequency of Capital Characters.

Input : "MarvellouS" 
Output : 6 (8-2)  

*/

#include<stdio.h>

int Difference(char *str)
{
	int CCount=0; 
    int SCount=0;	
	int iDiff=0;

	if(str==NULL)  //Filter
	{
		return 0;
	}

	while(*str!='\0')
	{
	  if((*str>='A')&&(*str<='Z'))
	  {
	     CCount++;
	  }
      else if((*str>='a')&&(*str<='z'))
      {
      	 SCount++;
	  }
	  str++;
    }
	iDiff=SCount-CCount;
    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet=0;

	printf("Enter String\n");
	scanf(" %[^'\n']s",Arr);

	iRet=Difference(Arr);
	printf("%d\n",iRet);
	
	return 0;
}	
   