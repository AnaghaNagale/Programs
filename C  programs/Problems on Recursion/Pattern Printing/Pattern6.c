/* Write a recursive program which display below pattern. 

Input : 5
Output : * * * * *

*/

#include<stdio.h>

void DisplayI(int iNo)
{
    int i=0;
	
	for(i=0;i<iNo;i++)
	{
		printf("*\n");
    }
}

void DisplayR(int iNo)
{
	static int i=0;
	
	if(i<iNo)
	{
		printf("*\t");
		i++;
		DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
	
    printf("Enter number\n");
    scanf("%d",&iValue);
	
    //DisplayI(iValue);
	DisplayR(iValue);
    return 0;
}