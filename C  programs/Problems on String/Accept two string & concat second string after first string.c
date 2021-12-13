/* write a program which accpet 2 strings from user and concat second string after fisrt string.(Impelment strcat() function)
Input: "Marvellous Infosystems"
       "Logic Building"
Output: "Marvellous Infosystems Logic Building"             in another string   
*/

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
	while(*src!='\0')               //Traverse first string till end
	{
		{
		   *src=*src;
		}  
		src++;	
	}
    (*src)='\0';
	while(*dest!='\0')               //Copy contents in destination in source
    {	
		*src=*dest;
		src++;
		dest++;
    }	
    *src='\0';
}

int main()
{
   char arr[50]="Marvellous Infosystems";
   char brr[30]="Logic Building"; 
   
   StrCatX(arr,brr);
   
   printf("%s\n",arr);    //"Marvellous Infosystems Logic Building"
   
   return 0;
}   
   