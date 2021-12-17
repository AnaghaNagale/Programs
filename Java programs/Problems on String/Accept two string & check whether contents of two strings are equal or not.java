/* Write a program which 2 strings from user and check whether contents of two strings are equal or not.

Input :   "Marvellous Infosystems"
          "Marvellous Infosystems"
Output :  TRUE

*/

import java.lang.*;
import java.util.*;

class StringDemo
{
    boolean StrCmpX(String src, String dest)
    {
		char str1[]=src.toCharArray();
		char str2[]=dest.toCharArray();
		
		int str1Cnt=str1.length-1;
		int str2Cnt=str2.length-1;
		
		int i=0;
		int j=0;
		boolean bRet=false;
		
		while((i!=str1Cnt)&&(j!=str2Cnt))
		{
			if(str1[i]!=str2[j])
			{
				break;
			}
            i++;
            j++;
		}

        if((i==str1Cnt)&&(j==str2Cnt))
		{
			bRet=true;
		}
        else
        {
			bRet=false;
		}
		return bRet;
    }
}	


class Lba352
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter first string:  ");
		String src=sobj.nextLine();
		
		System.out.println("Enter second string:  ");
		String dest=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		
		boolean bRet=dobj.StrCmpX(src,dest);
		
		if(bRet==true)
		{
			System.out.println("Equal");
		}
        else
        {
			System.out.println("Not Equal");
		}
	}	
}