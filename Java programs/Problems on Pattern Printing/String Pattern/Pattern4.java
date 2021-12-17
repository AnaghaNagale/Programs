/* Write a java program which accept String from user and display below pattern.

Input : Hello
Output :  H  e  l  l  o
          H  e  l  l  *
		  H  e  l  *  *
		  H  e  *  *  *       
		  H  *  *  *  *
          H  e  *  *  *		   
          H  e  l  *  *
		  H  e  l  l  *
		  H  e  l  l  o                          

*/ 
		             
import java.util.*;

class Pattern
{
    public void Pattern(String str)
	{
        char Arr[]=str.toCharArray();
	    int i=0,j=0;
		int iSize=Arr.length;
	    
	    for(i=Arr.length-1;i>=0;i--)        
	    {
			for(j=0;j<Arr.length;j++)
		    {
			    if(i>=j)
			    {
			      System.out.print(Arr[j]+"\t");
			    }
				else
				{
					System.out.print("*"+"\t");
				}	
		    }	
		    System.out.println();
        }
		
		for(i=1;i<Arr.length;i++)        
	    {
			for(j=0;j<Arr.length;j++)
		    {
			    if(i>=j)
			    {
			      System.out.print(Arr[j]+"\t");
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

class Lba394
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
		Pattern pobj=new Pattern();
		pobj.Pattern(str);
	}	
}
