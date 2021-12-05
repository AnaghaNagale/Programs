/* Write a program which accept number from user and display digits.

Input: 7521
Output: 1
        2
        5
        7

Input: 752
Output: 2
        5
        7

*/        

#include<stdio.h>

//Function Declaration
void Display(int);

//Entry point function
int main()
{
  int iValue=0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  Display(iValue);            //Function call
  
  return 0;
  
}  

//Function defination
void Display(int iNo)
{
  //Local variable
  int iDigit=0;
   
  while(iNo>0)
  {  
     iDigit=iNo%10;             //1
     printf("%d\n",iDigit);     //1
     iNo=iNo/10;                //752
  }
}  