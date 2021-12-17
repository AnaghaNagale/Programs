/*Write a java program which Accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=4   iCol=5
Output : 1  2   3   4
         5  6   7   8
         9  10  11  12	

*/
		  
import java.util.*;

class Pattern
{
	public String str;
    public void Pattern(int iRow,int iCol)
    {
	   int i=0;
	   int j=0;
	   int no=1;
	   
	   for(i=1;i<=iRow;i++)
	   {  
           for(j=1;j<=iCol;j++)
	       {
		      System.out.print(no+"\t");
			  no++;
		   }
		   System.out.println();
	   }
	}
}

class Lba365
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int iValue1=0,iValue2=0;

        System.out.println("Enter number of Rows ");
        iValue1=sobj.nextInt();

		 System.out.println("Enter number of Columns");
		iValue2=sobj.nextInt();

		Pattern pobj=new Pattern();
		
        pobj.Pattern(iValue1,iValue2);
	}	
}  	  