/*
    Problem Statement: Write a program which accept number from user and print that number.
*/

#include "Header.h"

int main()                            //Address of entry point function
{
  int iNo=0;
  printf("Enter number\n");
  scanf("%d",&iNo);
  Display(iNo);                     //Function call        
  return 0;                         //return to os
}

