/*
    Problem Statement: Write a program which accept number from user and print that number of * on screen.
*/

#include "Header.h"

int main()              //Entry point function
{
    int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayStar(iValue);      //Function call  

	return 0;           //return to os
}

