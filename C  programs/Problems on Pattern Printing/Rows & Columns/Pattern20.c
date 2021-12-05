/* Accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow= 5 iCol= 5
Output : 
           a b c d e
	       1 2 3 4 5
           a b c d e
	       1 2 3 4 5
	       a b c d e
	       1 2 3 4 5
     
*/
		  
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
	int iNo=1;
	char ch='\0';

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
		ch='a';
		iNo=1;

       for(j=1;j<=iCol;j++)
	   {
		  if((i%2)==0)
		  {
		  	  printf("%d\t",iNo);
		  	  iNo++;
		  }
		  else
		  {
		  	 printf("%d\t",ch);
		  	 ch++;
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