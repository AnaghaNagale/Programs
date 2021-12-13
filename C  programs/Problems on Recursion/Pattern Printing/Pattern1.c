/* Write a recursive program which display below pattern. 

Output : * * * * *

*/

#include<stdio.h>

void DisplayI()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("*\n");
    }
}

void DisplayR()
{
	static int i=0;
	if(i<5)
	{
		printf("*\t");
		i++;
		DisplayR();
    }
}

int main()
{
    //DisplayI();
	DisplayR();
    return 0;
}
