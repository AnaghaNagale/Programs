/* Write a program which accept number from user and display its multiplication  of factors.
Input : 12
Output : 144   (1*2*3*4*6)
Input: 13
Output: 1 (1)
Input :10
Output: 10  (1*2*5)
*/

#include<stdio.h>

int MultiFact(int iNo)
{ 
   int i=0;
   int Mul=1;

   for(i=1;i<=iNo/2;i++)
	if(iNo%i==0)   
    {
      printf("%d\n",i);
	  Mul=Mul*i;
	}
   return Mul;
}   

int main()
{ 
    int iValue=0;
	int iRet=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=MultiFact(iValue);
	printf("%d\n",iRet);

	return 0;
}	
	
	
	
     