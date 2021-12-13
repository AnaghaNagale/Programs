/* Write a recursive program which display below pattern. 

Input : 5
Output : 1 2 3 4 5

*/
 
#include<stdio.h>

void DisplayI(int iNo)
{
    int i=0;
	
	for(i=1;i<=iNo;i++)
	{
		printf("%d\n",i);
    }
}

void DisplayR(int iNo)
{
	static int i=1;
	
	if(i<=iNo)
	{
		printf("%d\t",i);
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