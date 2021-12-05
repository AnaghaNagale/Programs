/* Write a program which accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=3   iCol=4
Output : 
         1 1 1 1
         2 2 2 2
	     3 3 3 3

*/     
		  
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
    
    if(iRow<0)
	{
	   iRow=-iRow;
	}

	if(iCol<0)
	{
	   iCol=-iCol;
	}

	for(i=1;i<=iRow;i++)
	{  
       for(j=1;j<=iCol;j++)
	   {
		   printf("%d\t",i);
	   }
	   printf("\n");
    }
}

int main()
{
  int iValue1=0,iValue2=0;

  printf("Enter number of rows and columns");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern(iValue1,iValue2);

  return 0;
}  	  