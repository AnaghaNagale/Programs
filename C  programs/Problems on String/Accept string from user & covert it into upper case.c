/* Write a program which accept string from user and covert it into Upper case.

Input : "Marvellous Multi OS"
Output :MARVELLOUS MULTI OS 

*/

#include<stdio.h>

void struprx(char *str)
{
	while(*str!='\0')
	{
	    if((*str>='a')&&(*str<='z'))
		{
           *str=*str-32;
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

    struprx(Arr);
    
	return 0;
}	