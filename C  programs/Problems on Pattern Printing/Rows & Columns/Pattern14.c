/* Write a program which accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=4   iCol=4
Output : A B C D
         a b c d
         A B C D
         a b c d  

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0;
	int j=0;
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
       ch='A';
       for(j=1;j<=iCol;j++)
	   {
		   if((i%2)==0)
		   {
			  printf("%c\t",ch+32);
			  ch++;
		   }
		   else
		   {
			  printf("%c\t",ch); 
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