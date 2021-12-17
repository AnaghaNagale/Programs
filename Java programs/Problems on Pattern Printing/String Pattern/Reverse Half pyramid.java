/* Write a java program which accept String from user and display below pattern.

Input : Hello
Output :  H  e  l  l  o
          H  e  l  l  
		  H  e  l  
		  H  e        
		  H                 
		  
*/    

import java.util.*;

class Pattern
{
    public void Pattern(String str)
	{
        char Arr[]=str.toCharArray();
	    int i=0,j=0;
		int iSize=Arr.length;
		int iTemp=iSize;
     	    
        for(i=1;i<=iSize;i++)        
		{
			int k=0;
			for(j=1;j<=iTemp;j++)
		    {
			   System.out.print(Arr[k]+"\t");
			   k++;
  			}
		    System.out.println();
		    iTemp--;
		}
    }
}

class Lba382
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
