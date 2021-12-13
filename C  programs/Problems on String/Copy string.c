/* write a program which accpet string from user and copy the contents of that string into another string.(Impement strcpy() function)
Input: "Marvellous Multi OS"
Output: "Marvellous Multi OS"  in another string   
*/

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
    *dest='\0';
}

int main()
{
   char arr[30];             
   char brr[30];              //Static memory allocation of array  //Empty String
   
   printf("Enter the string: \n");  //scanf("%s",arr);
   scanf("%[^'\n']s",arr);           //Accept the input till  user enetrs enter key
   
   StrCpyX(arr,brr);
   
   printf("Copied string is: %s\n",brr);         //Marvellous Multi OS
   
   return 0;
}   
   
   