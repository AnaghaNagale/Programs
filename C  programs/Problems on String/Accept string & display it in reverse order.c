/* Write a program which accept string from user and Display it in Reverse order.

Input : "MarvellouS" 
Output : "SuollevraM"   

*/

#include<stdio.h>

void Reverse(char *str)
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

	Reverse(Arr);

	return 0;
}	