/* write a program which accpet string from user and copy the contents of that string into another string.(Impement strncpy() function)
Input: "Marvellous Multi OS"
        10
Output: "Marvellous"  in another string   
*/

#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
	while((*src!='\0')&&(iCnt!=0))
	{
		*dest=*src;
		src++;
		dest++;
		iCnt--;
	}
    *dest='\0';
}

int main()
{
   char arr[30];
   char brr[30];    //Empty String
   
   printf("Enter the string: \n");  //scanf("%s",arr);
   scanf("%[^'\n']s",arr);           //Accept the input till  user enetrs enter key
   
   StrNCpyX(arr,brr,10);
   
   printf("Copied the content of that string is: %s\n",brr);         //Marvellous
   
   return 0;
}   
   