/* Accept the number of rows and number of columns from user  and Display below pattern.

Input:  iRow=6 iCol=6
Output : 1 2 3 4 5 6
         1 2       6
         1   3     6
         1     4   6
         1       5 6
         1 2 3 4 5 6      
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
      printf("Error : Invalid argument");
	  return;
	}  
	
	for(i=1;i<=iRow;i++)  
	{
	   for(j=1;j<=iCol;j++)  
	   {
	      if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
		  {
		      printf("%d\t",j);
		  }
          else
		  {
	         printf(" \t");
		  }
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