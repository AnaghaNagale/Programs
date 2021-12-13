/* write a program which accpet string from user and copy that Characters of that string into another string by toggling the case.
Input: "Marvellous Python 2"
Output: "mARVELLOUS pYTHON 2"             in another string   
*/

#include<stdio.h>

void StrCpyToggle(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*src=*src+32;
			*dest=*src;
			src++;
			dest++;
	    }
		else if((*src>='a')&&(*src<='z'))
		{
			*src=*src-32;
			*dest=*src;
			src++;
			dest++;
	    }
		else
        {
            *dest=*src;
			src++;
			dest++;			
		}	
	}	
	*dest='\0';	
}

int main()
{
   char arr[30];
   char brr[30];    //Empty String

   printf("Enter the string: \n");  //scanf("%s",arr);
   scanf("%[^'\n']s",arr); 

   StrCpyToggle(arr,brr);
   
   printf("Modified string is: %s\n",brr);    //mARVELLOUS pYTHON 2
   return 0;
}   