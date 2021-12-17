/* Write a java program which accept string from user and display it in Reverse order.

Input : "MarvellouS"
Output : SuollevraM 

 */

import java.util.*;

class StringDemo
{
	public String str;
    public String ReverseX(String str)
	{
		char Arr[]=str.toCharArray();
		int iStart=0,iEnd=Arr.length-1;
		char temp;
		while(iStart<iEnd)
		{
			temp=Arr[iStart];
			Arr[iStart]=Arr[iEnd];
			Arr[iEnd]=temp;
     		iStart++;
			iEnd--;
		}
		return new String(Arr);
    }		
}

class Lba315
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter a String");
		String str=sobj.nextLine();

		StringDemo dobj=new StringDemo();

		String s=dobj.ReverseX(str);
		
		System.out.println("Reverse String is: "+s);
	}
}	