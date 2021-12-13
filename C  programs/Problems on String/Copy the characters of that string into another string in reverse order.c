/* write a program which accpet string from user and copy that Characters of that string into another string in Reverse order.
Input: "Marvellous Python"
Output: "nohtP suollevraM"             in another string  
 */
 
#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}	
	while(*src!='\0')
	{
	    src++;
	}
	src--;
	while(*src!='\0')
	{
        *dest=*src;
        dest++;
		src--;
    }		
    *dest='\0';
}

int main()
{
   char arr[30]={'\0'};
   char brr[30]={'\0'};    //Empty String
   
   printf("Enter the string: \n");  //scanf("%s",arr);
   scanf("%[^'\n']s",arr);           //Accept the input till  user enetrs enter key
   
   StrCpyRev(arr,brr);
   
   printf("Copied reverse string is: %s\n",brr);    //nohtP suollevraM
   
   return 0;
   
}   
   
   