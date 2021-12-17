/* Accept sing from user and reverse the contents of that string by toggling the case.

Input :  "aCBdef"
Output : "FEDcbA"

*/

import java.lang.*;
import java.util.*;

class StringDemo
{
    void StrRevTogX(String str)
    {
        char arr[]=str.toCharArray();
	    int size=arr.length-1;
	    int iStart=0;
	    int iEnd=size;
	   
	    char temp='\0';
	   
	    while(iStart<iEnd)
	    {
		   temp=arr[iStart];
		   arr[iStart]=arr[iEnd];
		   arr[iEnd]=temp;
		   iStart++;
		   iEnd--;
	    }
        System.out.println(arr);
	   
	    int i=0;
	   
	    while(i<=size)
	    {
		   if((arr[i]>='A')&&(arr[i]<='Z'))
		   {
			   arr[i]=(char)((int)arr[i]+32);
		   }
		   else if((arr[i]>='a')&&(arr[i]<='z'))
		   {
			   arr[i]=(char)((int)arr[i]-32);
		   }
           i++;
        }
		System.out.println(arr);
    }
}   
	   
class Lba354
{
    public static void main(String arg[])
	{
        Scanner sobj=new Scanner(System.in);

		System.out.println("Enter string:  ");
		String src=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		
		dobj.StrRevTogX(src);
	}
}	
		
		