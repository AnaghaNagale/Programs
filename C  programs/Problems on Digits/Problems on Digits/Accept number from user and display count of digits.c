/*Write a program which accept number from user and Display  count of digits.  

Input: 2245
Output:  4
Input:  876
Output:  3

*/

//Header file inclusion
#include<stdio.h>

//Function Declaration
int CountDigit(int);

//Entry point function
int main()
{
  int iValue=0,iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet=CountDigit(iValue);      //Function call

  printf("Number of digits are:%d\n",iRet);
  
  return 0;
  
}  

//Function defination
int CountDigit(int iNo)
{
  //Local variable
  //int iDigit=0;
  int iCnt=0;

  if(iNo==0)          //Filter
  {
    return 1;
  }	

  if(iNo<0)          //Input Updater
  {
     iNo=-iNo;
  }	 

  while(iNo>0)
  {  
     
     iCnt++;         //iCnt=iCnt+1;
     iNo=iNo/10;       
  }

  return iCnt;
}  