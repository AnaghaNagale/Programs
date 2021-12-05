/*  Write a program accept number from user and Display below pattern.

Input: 6
Output: A B C D E F

*/

#include<stdio.h>

void Display(int iNo)
{
   int iCnt=0;
   char ch='\0';

   //       1           2          3
   for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
   {
      printf("%c\t",ch);  //4
   }    
   
}

int main()
{
   int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}   
