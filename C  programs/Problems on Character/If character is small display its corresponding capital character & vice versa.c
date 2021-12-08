/* Accept Character from user.If Character is Small display its coressponding Capital Character,and if it Small then dispaly its coressponding Captital.In othe cases display as it is.
Input : Q
Output : q

Input : m
Output :  M

Input : 4
Output :  4

Input : %
Output :   %  
*/

#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
       ch=ch+32;
	   printf("%c\n",ch);
    }
	else if((ch>='a')&&(ch<='z'))
	{
        ch=ch-32;
		printf("%c\n",ch);
    }
	else 
	{
		printf("%c\n",ch);
    }
}	

int main()
{
	char cValue='\0';

	printf("Enter  the Character\n");
	scanf("%c",&cValue);

	Display(cValue);
	
	return 0;
}	