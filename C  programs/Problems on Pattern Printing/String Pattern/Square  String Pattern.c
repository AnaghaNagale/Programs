/* Write a program which accept String from user and display below  pattern.

Input : "Hello"
Output :  H  e  l  l  o
          H  e  l  l  o 
		  H  e  l  l  o
		  H  e  l  l  o         

Input : "Marvellous"
Output : M a r v e l l o u s
         M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s 
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s
		 M a r v e l l o u s

*/

#include<stdio.h>

void Pattern(char str[])
{
	int i=0;
	int j=0;
	int k=0;
	int iCnt=0;
	int iLength=0;

	while(str[iLength]!='\0')
	{
		iLength++;
		iCnt++;
	}

	for(i=1;i<=iLength;i++)
	{
		k=0;

		for(j=1;j<=iLength;j++)
		{
			printf("%c\t",str[k]);
			k++;
		}
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
