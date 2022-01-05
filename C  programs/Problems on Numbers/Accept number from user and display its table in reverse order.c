/* Write a program which accept number from user and display its table in reverse order.
Input :  5
Output : 50 45 40 35 30  25 20 15 10 5
Input :  -5
Output : 50 45 40 35 30  25 20 15 10 5
*/

#include<stdio.h>

void DisplayTableRev(int);

int main()
{
  int iValue=0;

  printf("Enter number to diplay its table\n");
  scanf("%d",&iValue);
  
  DisplayTableRev(iValue);
  return 0;
  
}

void DisplayTableRev(int iNo)
{
   int iCnt=0;
   int iTable=0;
   
   if(iNo==0)
   {
	   return;
   }
   if(iNo<0)
   {
      iNo=-iNo;
   }
	  
   for(iCnt=10;iCnt>=1;iCnt--)
   {
      iTable=iNo*iCnt;
      printf("%d\n",iTable);
   }
}  
   