/* Accept the number of rows and number of columns from user  and Display below pattern.

Input:  iRow=4  iCol=4
Output : 1 2 3 4
         2 3 4
         3 4
	     4

*/
		  
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	if(iRow<0)
	{
	   iRow=-iRow;
	}

	if(iCol<0)
	{
	   iCol=-iCol;
	}

	if(iRow !=iCol)
	{
	  printf("Invalid Input");
	  return;
	} 
	 
	for(i=1;i<=iRow;i++)  
	{
	   for(j=1;j<i;j++)   
	   {
		  printf(" ");
	   }
	   for(j=i;j<=iRow;j++) 
		{
		  printf("%d",j);  
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