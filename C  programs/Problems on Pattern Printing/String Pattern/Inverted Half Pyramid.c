/* Write a program which accept String from user and display below pattern.

Input : Hello
Output :  H  e  l  l  o
          H  e  l  l  
		  H  e  l  
		  H  e        
		  H                

Input : "Marvellous"
Output : M a r v e l l o u s
         M a r v e l l o u 
		 M a r v e l l o 
		 M a r v e l l 
		 M a r v e l 
		 M a r v e 
		 M a r v 
		 M a r 
		 M a 
		 M 
*/    

#include<stdio.h>

void Pattern(char str[])
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

}

int main()
{
	char str[30]={'\0'};

	printf("Enter string: \n");
	scanf("%[^'\n']s",&str);

	Pattern(str);

	return 0;
}
