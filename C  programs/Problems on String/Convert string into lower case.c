/* write a program which accpet string from user and copy that Characters of that string into another string by coverting all capital Characters into small case.
Input: "Marvellous Python 2"
Output: "marvellous python 2"             in another string   
*/

#include<stdio.h>

/*
Using array
void strlwrX(char str[])
{
	int i=0;
	char string[30];
	while(str[i]!='\0')
	{
		if((str[i]>='A')&&(str[i]<='Z'))
		{
			string[i]=str[i]+32;
		}
		i++;
	}	
    string[i]='\0';
    printf("%s\n",string);
 }
*/
 
void StrCpySmall(char *src,char *dest)
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
   
   StrCpySmall(arr,brr);
   
   printf("Modified string is: %s\n",brr);    //marvellous python 2
   
   return 0;
}   