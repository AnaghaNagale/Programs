/* Write a program which accept String from user and display below pattern.

Input : Hello
Output :  H  e  l  l  o
          H  e  l  l  *
		  H  e  l  *  *
		  H  e  *  *  *          
		  H  *  *  *  *          

 */   

#include<stdio.h>

void StringPattern(char str[])
{
	int i=0;
	int j=0;
	int iLength=0;
	int iCnt=0;
	
	while(str[iLength]!='\0')
	{
		iLength++;
		iCnt++;
	}
	
    for(i=iLength-1;i>=0;i--)        
    {
	    for(j=0;j<iLength;j++)
		{
			if(i>=j)
			{
			     printf("%c\t",str[j]);
			}
		    else
			{
				printf("*\t");
			}	
	    }
		printf("\n");
    }
}

int main()
{
	char str[30]={'\0'};

	printf("Enter string: \n");
	scanf("%[^'\n']s",&str);

	StringPattern(str);

	return 0;
}