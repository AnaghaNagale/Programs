/* Write a recursive program which accept number from user and display below pattern. 

Input : 5
Output : 5 * 4 * 3 * 2 * 1 *

*/


#include<stdio.h>
 
void DisplayI(int iNo)
{
   int iCnt=0;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
       printf("%d *\t",iCnt);
   }
}   

void DisplayR(int iNo)
{
   if(iNo>0)
   {
       printf("%d *\t",iNo);
	   iNo--;
	   DisplayR(iNo);
   }
} 

int main()
{
    int iValue = 0;
	
    printf("Enter number of elements\n");
    scanf("%d",&iValue);
	
    //DisplayI(iValue);
	   DisplayR(iValue);
     
    return 0;
}
