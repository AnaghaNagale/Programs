/* Write a java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output :    1 2 3 4 5
            1 2     5
            1   3   5
            1     4 5
            1 2 3 4 5       

*/  

import java.util.*;

class Pattern
{
   void Pattern(int iRow,int iCol)
   {
	   int i=0;
	   int j=0;
	   for(i=1;i<=iRow;i++)        
	   {
		 for(j=1;j<=iCol;j++)
		 {
			if ((j==1)||(i==1)||(j==iCol)||(i==iRow))
			{
			   System.out.print(j+"\t");
			}
			else if(i==j)
			{
			   System.out.print(i+"\t");
			}
			else
			{
			   System.out.print("\t");
			}
		  }	
		  System.out.println();
        } 
    }
}

class Lba405
{
	public static void main(String arg[])
	{
		int iValue1=0;
		int iValue2=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		iValue1=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		iValue2=sobj.nextInt();
		
		Pattern pobj=new Pattern();
		pobj.Pattern(iValue1,iValue2);
	}	
}

