/* write a program which accpet string from user and copy that Characters of that string into another string by removing all white spaces.
Input: "Marvel   lous  Pyth  on"
Output: "MarvellousPython"             in another string   
*/

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	
	while(*src!='\0')
	{
		if(*src == ' ')
		{
			*dest=*src;
			src++;
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
   char arr[30]={'\0'};
   char brr[30]={'\0'};    //Empty String

   printf("Enter the string: \n");  //scanf("%s",arr);
   scanf("%[^'\n']s",arr);    //Accept the input till  user enetrs enter key

   StrCpyX(arr,brr);

   printf("Copied string is: %s\n",brr);    //MarvellousPython
   
   return 0;
}   