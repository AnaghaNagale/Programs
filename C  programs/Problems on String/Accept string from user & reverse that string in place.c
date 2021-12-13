/* Write a program which accept string from user  Reverse that string in place.

Input : "abcd" 
Output : "dcba"   

Input : "abba" 
Output : "abba"   

*/

#include<stdio.h>

void StrRevX(char *str)
{
   int iCnt=0;
   int i=0;

   while(str[i]!='\0')
   {
	   {
		   iCnt++;
	   }
	   i++;
   }
   for(i=iCnt-1;i>=0;i--)
   {
	   printf("%c",str[i]);
   }   
}	 

int main()
{
    char Arr[20];

	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);

	StrRevX(Arr);
	
	return 0;
}	
   