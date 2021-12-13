/* Write a program which accept string from user and toggle the case.

Input : "Marvellous Multi OS"
Output :mARVELLOUS mULTI os      

*/

#include<stdio.h>

void strtogglex(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
	    {
           *str=*str-32;
		   printf("%c",*str);
		   str++;
        }
		else if(*str==' ')
		{
			printf("%c",*str);
			str++;
		}	
	    else
		{
           *str=*str+32;
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

    strtogglex(Arr);
    
	return 0;
}	