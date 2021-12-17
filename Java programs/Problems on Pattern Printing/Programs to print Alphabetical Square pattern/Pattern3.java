/*Write a java program which Accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=3   iCol=5
Output : A A A A A 
         B B B B B
         C C C C C
         D D D D D  

*/
		  
import java.util.*;

class Pattern
{
	public String str;
    public void Pattern(int iRow,int iCol)
    {
	   int i=0;
	   int j=0;
	   char ch='\0';
	   for(i=1,ch='A';i<=iRow;i++,ch++)
	   {  
           for(j=1;j<=iCol;j++)
	       {
			   System.out.print(ch+"\t");
		   }
	      System.out.println();
        }
	}
}

class Lba363
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int iValue1=0,iValue2=0;

        System.out.println("Enter number of Rows: ");
        iValue1=sobj.nextInt();

		System.out.println("Enter number of Columns: ");
		iValue2=sobj.nextInt();

		Pattern pobj=new Pattern();

        pobj.Pattern(iValue1,iValue2);
	}	
}  	  