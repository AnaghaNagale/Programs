/* Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : "Marvellous Infosystems"
        "Marvellous Logic Building"
         10
Output : TRUE

*/

import java.lang.*;
import java.util.*;

class StringDemo
{
    boolean StrNCatX(String src, String dest ,int iCnt)
    {
		char arr[]=src.toCharArray();
		char brr[]=dest.toCharArray();
		char crr[]=new char[20];
		
		int i=0;
		int j=0;
		int Count=iCnt;
		
		while(iCnt!=0)
		{
			if(brr[i]!=arr[j])
			{
				break;
			}
            i++;
            j++;
            iCnt--;
        }
		
		if(i==Count)
		{
			return true;
		}
        else
		{
			return false;
		}	
    }
}	


class Lba353
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter first string:  ");
		String src=sobj.nextLine();
		
		System.out.println("Enter second string:  ");
		String dest=sobj.nextLine();
		
		System.out.println("Enter Count:  ");
		int iCnt=sobj.nextInt();
		
		StringDemo dobj=new StringDemo();
		
		boolean bRet=dobj.StrNCatX(src,dest,iCnt);
		
		if(bRet==true)
		{
			System.out.println("true");
		}
        else
        {
			System.out.println("false");
		}
	}	
}