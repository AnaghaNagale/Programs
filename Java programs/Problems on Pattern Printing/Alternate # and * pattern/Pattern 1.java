/* Write a java program which Accept the number of rows and number of columns from user and Display below patten.

Input:  iRow=3  iCol=4
Output : * # * #
         * # * #
         * # * #

*/
		  
import java.util.*;

class Pattern
{
    public void Pattern(int iRow,int iCol)
    {
	   int i=0;
	   int j=0;

	   for(i=1;i<=iRow;i++)
	   {  
          for(j=1;j<=iCol;j++)
		  {
		     if((j%2)==0)	  
	         {
		        System.out.print("#"+"\t");
	         }
		     else
		     {
			    System.out.print("*"+"\t"); 
             }
	      }		  
	      System.out.println();
       }  
	}   
}

class Lba374
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
	  