/* Write a program which accept String from user and display below pattern.

Input : Hello
Output :  H  e  l  l  o
          H  e  l  l
		  H  e  l  
		  H  e         
		  H
          H		  
          H  e  		   
          H  e  l 
		  H  e  l  l
		  H  e  l  l  o                           

*/ 
		             
#include<stdio.h>

void StringPattern(char str[])
{
	int i=0;
	int j=0;
	int k=0;
	int iCnt=0;
	int iLength=0;
	int iCol=0;

	while(str[iLength]!='\0')
	{
		iLength++;
		iCnt++;
	}

    iCol=iLength;
	for(i=1;i<=iLength;i++)
	{
		k=0;

		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",str[k]);
			k++;
		}
		iCol--;
		printf("\n");
	}
	
	for(i=0;i<iLength;i++)        
	    {
		  for(j=0;j<iLength;j++)
		  {
			 if(i>=j)
			 {
			   printf("%c\t",str[j]);
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
