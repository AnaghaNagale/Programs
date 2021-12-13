/* write a program which accpet string from user and copy that Characters of that string into another string by coverting all small Characters into Capital case.
Input: "Marvellous Python 2"
Output: "MARVELLOUS PYTHON 2"             in another string   
*/

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
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
   
   StrCpyCap(arr,brr);
   
   printf("Modified string is: %s\n",brr);    //MARVELLOUS PYTHON 2
   return 0;
}   