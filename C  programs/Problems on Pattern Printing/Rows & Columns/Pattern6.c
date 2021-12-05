/* Write a program which accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=4  iCol=4
Output : 
        # # # #
        * * * *
        # # # #
        * * * *
*/
		  
#include<stdio.h>

void Display(int iRow,int iCol)
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

	//    1    2     3
	for(i=1;i<=iRow;i++)  //Outer
	{
		//   1     2     3
	   for(j=1;j<=iCol;j++)  //Inner 
	   {
		  if((i%2)==0)
		  {
		     printf("*\t");   //Even
		  }
          else
          {
			 printf("#\t");  //Odd
	      } 
	   }
	   printf("\n");
	}   
}

int main()
{
  int iValue1=0,iValue2=0;

  printf("Enter number of rows\n");
  scanf("%d",&iValue1);

  printf("Enter number of columns\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2); 

  return 0;
}  	  