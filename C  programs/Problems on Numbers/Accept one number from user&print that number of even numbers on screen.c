/* Write a program which accept one number from user and print that number of even number on screen.
Input :  7
Output : 2 4 6 8 10 12 14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
   if(iNo<=0)
   {
     return;
   }
  
   int i=0;
   
   for(i=1;i<=iNo*2;i++)
   if((i%2)==0)
   {
    printf("%d\t",i); 
   }
}

int main()
{
    int iValue=0;

	printf("Enter number\n");
    scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}	
    

