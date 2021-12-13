/* Write a program which accept string from user and check wether it contains vowels in it or not.
Input : "Marvellous" 
Output : TRUE 

Input : "Demo" 
Output : TRUE 

Input : "xyz" 
Output : FALSE    
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	
	if(str==NULL)  //Filter
	{
		return 0;
	}
	while(*str!='\0')
	{		
	 {
	   if((*str=='a')||(*str=='A')||(*str=='e')||(*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U'))	
	   {
		  return TRUE;
	   }
	 } 
     str++;
	}
}

int main()
{
    char Arr[20];
    BOOL bRet=FALSE;

	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);

	bRet=ChkVowel(Arr);
	if(bRet==TRUE)
	{
		printf("Contains vowels\n");
	}
    else
    {
        printf("There is no vowels\n");
	}		

	return 0;
}	
   