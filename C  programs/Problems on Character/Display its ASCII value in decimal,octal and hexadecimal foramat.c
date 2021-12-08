/* Accept Character from user.and Display its ASCII value in decimal,octal and hexadecimal  format.

Input :A
Output : Decimal       65
         Octal         0101                   
		Hexadeciaml    0X41                 

*/  		
		
#include<stdio.h>

void Display(char ch)
{
	int i=0;

	{
		printf("Decimal :%d\n",ch);
		printf("Hexadecimal :%x\n",ch);
        printf("Octal :%o\n",ch);  
    }		 
}

int main()
{
	char cValue='\0';

	printf("Enter the Character\n");
	scanf("%c",&cValue);

	Display(cValue);
	
	return 0;
}	
	
		