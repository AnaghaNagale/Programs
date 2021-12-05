/*Write a program which accept number from user and Display addition of digits.

Input: 954
Output: 18

*/

//Header file inclusion
#include<stdio.h>

//Function Declaration
int Display(int);

//Entry point function
int main()
{
  int iValue=0,iRet=0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet=Display(iValue);     //Display(954)  //Function call
  printf("Addition of digits is:%d\n",iRet);
  return 0;
  
}  

//Function defination
int Display(int iNo)
{
  //Local variable
  int iDigit=0,iSum=0;
  if(iNo<0)               //Input Updater
  {
     iNo=-iNo;
  }	 
  while(iNo>0)
  {  
     iDigit=iNo%10;   
     iSum=iSum+iDigit;
     iNo=iNo/10;       
  }
  return iSum;
}  