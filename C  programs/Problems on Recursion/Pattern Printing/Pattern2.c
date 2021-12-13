/* Write a recursive program which display below pattern. 

Output : 1 2 3 4 5

*/

#include<stdio.h>

void DisplayI()
{
    int i=0;
	for(i=1;i<=5;i++)
	{
		printf("%d\n",i);
    }
}

void DisplayR()
{
	static int i=1;
	if(i<=5)
	{
		printf("%d\t",i);
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
