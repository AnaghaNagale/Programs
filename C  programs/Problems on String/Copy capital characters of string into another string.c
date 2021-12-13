/* write a program which accpet string from user and copy Capital Characters of that string into another string.
Input: "Marvellous Multi OS"
Output: "MMOS"             in another string   
*/

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{	
		    *dest=*src;
		    dest++;
		}	
		src++;
	}
    *dest='\0';
}

int main()
{
   char arr[50];
   char brr[30];    //Empty String
   
   printf("Enter the string: \n");  
   scanf("%[^'\n']s",arr);      
   
   StrCpyCap(arr,brr);
   
   printf("%s\n",brr);    //MMOS
   
   return 0;
}   
   