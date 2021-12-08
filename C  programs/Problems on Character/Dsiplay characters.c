/* Accept Character from user.It is capital then display all the  Characters from the input Characters till .If and if input Character is Small then print all the Characters in reverse order till a.In order cases return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input :8
Output :                           
*/

#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
      for(char i=ch;i<='Z';i++)
	  {	  
	     printf("%c\t",i);
	  }	 
    }
	else if((ch>='a')&&(ch<='z'))
	{
      for(char i=ch;i>='a';i--)
	  {		   
		 printf("%c\t",i);
	  }	 
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