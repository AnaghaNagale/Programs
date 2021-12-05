/*Accept the number of rows and number of columns from user  and Display below pattern.

Input:  iRow=6 iCol=6
Output : *  *  *  *  *  *
         *           *  *
         *        *     *
         *     *        *
         *  *           *
		 *  *  *  *  *  *      
		 
 */
 
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	if(iRow !=iCol)
	{
	  return;
	} 

    for(i=1;i<=iRow;i++) 
	{
		 for(j=iCol;j>=1;j--) 
	   {
	      if((j==1)||(i==1)||(j==iCol)||(i==iRow))
		  {
		      printf("*");
		  }
          else if(i==j)
		  {
	         printf("*");
		  }
		  else
		  {
             printf(" ");
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