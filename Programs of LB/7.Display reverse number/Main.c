/*
    Problem Statement: Write a program which accept number from user and print reverse number.
*/

#include "Header.h"

int main()                          //address of entry point fuction
{
  int iNo=0;
  printf("Enter number\n");
  scanf("%d",&iNo);
  Display(iNo);                   //Function call        
  return 0;                       //return to os
}

