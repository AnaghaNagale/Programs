/* Write a program which accept string from user and covert it into lower case.

Input : "Marvellous Multi OS"
Output :marvellous multi os     

 */

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str!='\0')
	{
	    if((*str>='A')&&(*str<='Z'))
		{
          *str=*str+32;
		  printf("%c",*str);
		  str++;
		}
		else
		{
		   printf("%c",*str);
		   str++;
		}   
    }
	
}

int main()
{
    char Arr[20];

	printf("Enter String\n");
	scanf(" %[^'\n']s",Arr);

    strlwrx(Arr);
    
	return 0;
}	