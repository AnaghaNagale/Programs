/* write a program which accpet two string from user and check whether first N contents of two strings are equal or not.(Impement strcmp() function)
Note : If third prameter is greater than the size of second string then concat whole string after first string.
Input :  "Marvellous Multi OS"
         "Marvellous Multi OS" 
		 10
Output : TRUE 
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL strNcmpX(char *arr,char *brr,int iCnt)
{
	while((*arr!='\0')&&(*brr!='\0')&&(iCnt!=0))
	{
		if(*arr==*brr)
		{
			arr++;
			brr++;
			iCnt--;
		}
        else
		{
			break;
		}
	}
	
	if((*arr==*brr)||(iCnt==0))
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
    int iCnt=0;   
   BOOL bRet = FALSE;
   
   printf("Enter the  first string: ");
   scanf("%[^'\n']s",arr);    
   
   printf("Enter the  second string: ");
   scanf(" %[^'\n']s",brr);           
   
   printf("Enter Count: ");
   scanf("%d",&iCnt);
   
   bRet=strNcmpX(arr,brr,iCnt);
   
   if(bRet==TRUE)
   {
	   printf("First %d contents of two strings are equal",iCnt);
   }
   else
   {
	   printf("First %d contents of two strings are not equal",iCnt);
   }
   
    return 0;
}   
   
   