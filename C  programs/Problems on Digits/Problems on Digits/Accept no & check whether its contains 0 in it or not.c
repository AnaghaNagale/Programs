/*Wtrie a program which accpet number from user and check whether its contains 0 in it or not.

Input:  2395
Ouput:  There is no zero

Input: 9000
Output: It contains zero

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckZero(int iNo)
{
     int iCnt=0;
	 int iDigit=0;

	 while(iNo!=0)
	 {
	    iDigit=iNo%10;
		if(iDigit==0)
		{
		   iCnt++;
		}
	 	
     iNo=iNo/10;
	 }
     if(iCnt>0)
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
    int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet=CheckZero(iValue);

	if(bRet==TRUE)
	{
	   printf("It contains zero\n");
	}
    else
    {
      printf("There is no zero\n");	
	}
	
    return 0;
}	
      