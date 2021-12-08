/* Write a program which accept one character from user and covert case of that character.
Input : a   Output : A
Input : D   Output :  d
*/

#include<stdio.h>

void DisplayConvert(char CValue)
{
  if((CValue>='A')&&(CValue<='Z'))
  { 
    CValue=CValue+32;
    printf("%c\t",CValue);
  }
  else if((CValue>='a')&&(CValue<='z'))
  {
	CValue=CValue-32;  
    printf("%c\t",CValue);
  }
}  

int main()
{  
  char CValue='\0';

	printf("Enter character\n");
	scanf("%c",&CValue);

	DisplayConvert(CValue);
  
	return 0;
}	
	
