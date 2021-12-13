/* Write a recursive program which display below pattern.

Input : 5
Output : 5 4 3 2 1

*/

#include<stdio.h>

void DisplayI(int iNo)
{
    int i=0;
	
	for(i=iNo;i>=1;i--)
	{
		printf("%d\n",i);
    }
}

void DisplayR(int iNo)
{
	if(iNo>0)
	{
		printf("%d\t",iNo);
		iNo--;
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