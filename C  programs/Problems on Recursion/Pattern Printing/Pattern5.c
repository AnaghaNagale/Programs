/* Write a recursive program which display below pattern. 

Output : a b c d e f

*/

#include<stdio.h>

void DisplayI()
{
    int iCnt=0;
	char ch='a';
	for(iCnt='a';iCnt<='e';iCnt++)
	{
		printf("%c\n",ch);
		ch++;
	}	
}

void DisplayR()
{
	static int iCnt='a';
	char ch='a';
	if(iCnt<='e')
	{
		printf("%c\t",iCnt);
		iCnt++;
		DisplayR();
	}	
}

int main()
{
   //DisplayI();
   DisplayR();
   return 0;
}
