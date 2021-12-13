/* write a program which accpet 2 strings from user and concat second string after fisrt string.(Impelment strcat() function)
Input: "Marvellous Infosystems"
       "Logic Building"
Output: "Marvellous Infosystems Logic Building"             in another string   
*/

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
	int iLength=0;
	int j=0;

	while(src[iLength]!='\0')               //Traverse first string till end
	{
		iLength++;	
	}
	
    src[iLength]=' ';
    iLength++;
   
	while(dest[j]!='\0')               //Copy contents in destination in source
    {	
		src[iLength]=dest[j];
		iLength++;
		j++;
    }	
    src[iLength]='\0';
}

int main()
{
   char arr[50];
   char brr[30]; 
   
   printf("Enter the first string: ");  
   scanf("%[^'\n']s", arr);    
   
   printf("Enter the second string: ");  
   scanf(" %[^'\n']s",brr);   
   
   StrCatX(arr,brr);
   
   printf("String after concat : %s",arr);    //"Marvellous Infosystems Logic Building"
   
   return 0;
}   
   