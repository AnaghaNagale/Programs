/* Write a java program which Accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=6  iCol=6
Output : *  *  *  *  *  * 
         *           *  *
         *        *     *
         *     *        *
         *  *           *
         *  *  *  *  *  *                		 

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
			
			for(j=iCol;j>=1;j--)
		 {
			if ((j==1)||(i==1)||(j==iCol)||(i==iRow))
			{
			 System.out.print("*"+"\t");
			}
			else if(i==j)
			{
			  System.out.print("*"+"\t");
			}
			else
			{
		        System.out.print(" "+"\t");
			}
			
		 }	
		  System.out.println();
        }
   }
}

class Pattern403
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