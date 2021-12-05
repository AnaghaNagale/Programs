/*
    Problem Statement: Accept the number from user and print that number of Factorial.
*/

#include"Header.h"                      //User defined header file inclusion

int main()                              //Address of entry point function
{
   int iNo=0,iRet=0;

   printf("Enter number\n");
   scanf("%d",&iNo);

   iRet=Factorial(iNo);

   printf("Factorial is:%d\n",iRet);
   
   return 0;
}