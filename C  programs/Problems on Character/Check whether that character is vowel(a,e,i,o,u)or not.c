/* Write a program which accpet on character from user and  check whether that character is vowel(a,e,i,o,u) or not.
Input :E   Output:TRUE

Output:D   Output:FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char ch)
{
  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}  

int main()
{
   char cValue='\0';
   BOOL bRet=FALSE;
   
   printf("Enter character\n");
   scanf("%c",&cValue);
   
   bRet=ChkVowel(cValue);
   
   if(bRet==TRUE)
   {
     printf("It is Vowel\n");
   }
   else
   {
     printf("It is not Vowel\n");
   }
   
   return 0;
}   