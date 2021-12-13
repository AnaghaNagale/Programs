/* Write a recursive program which display below pattern. 

Output : A B C D E F

*/

#include<stdio.h>

void DisplayI()
{
	int iCnt=0;
	char ch='A';
	for(iCnt='A';iCnt<='E';iCnt++)
	{
		printf("%c\n",ch);
		ch++;
	}	
}

void DisplayR()
{
	static int iCnt='A';
	char ch='A';
	if(iCnt<='E')
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
