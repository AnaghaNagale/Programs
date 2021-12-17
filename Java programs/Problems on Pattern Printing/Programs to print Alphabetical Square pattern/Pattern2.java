/* Write a java program which Accept the number of rows and number of columns from user and Display below pattern.

Input:  iRow=4   iCol=4
Output : A B C D
         a b c d
         A B C D
         a b c d   

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

	   for(i=1;i<=iRow;i++,ch++)
	   {  
           for(j=1,ch='a';j<=iCol;j++,ch++)
	       {
		      if((i%2)==0)
		      {
				for(j=1,ch='a';j<=iCol;j++,ch++)
				{	
			      System.out.print(ch+"\t");
				}  
		      }
		      else
			  {
				for(j=1,ch='A';j<=iCol;j++,ch++)
		        {
			      System.out.print(ch+"\t");
		        }
		      }
		      System.out.println();
	       }
		}
	}
}	

class Lba362
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