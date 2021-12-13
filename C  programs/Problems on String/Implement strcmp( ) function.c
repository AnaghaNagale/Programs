/* write a program which accpet two string from user and check whether contents of two strings are equal or not.(Impement strcmp() function)
Input :  "Marvellous Multi OS"
         "Marvellous Multi OS" 
Output : TRUE 
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckStrings(char arr[],char brr[])
{
	while((*arr!='\0')&&(*brr!='\0'))
	{
		if(*arr==*brr)
		{
			arr++;
			brr++;
		}
        else
		{
			break;
		}
	}
	
	if((*arr==*brr)||(*brr!='\0'))
	{
		return TRUE;
	}
    else
    {
		return FALSE;
	}	
}
	
int main()
{
   char arr[30]={'\0'};             
   char brr[30]={'\0'};             
   BOOL bRet = FALSE;
   
   printf("Enter the  first string: ");
   scanf("%[^'\n']s",arr);    
   
   printf("Enter the  second string: ");
   scanf(" %[^'\n']s",brr);           
   
   bRet=CheckStrings(arr,brr);
   
   if(bRet==TRUE)
   {
	   printf("Strings are equal ");
   }
   else
   {
	   printf("Strings are not equal ");
   }
   
    return 0;
}   
   
   