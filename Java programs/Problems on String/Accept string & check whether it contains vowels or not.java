/* Write a java program which accept string from user and check whether it contains vowels or not.

Input : "marvellous"
Output : TRUE  

Input : "Demo"
Output : TRUE

Input : "xyz"
Output : FALSE   

*/   

import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
	{
		int i=0;

		boolean bFlag=false;

		while(i<str.length())
		{	
	        char ch=str.charAt(i);
	        if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
			{     
              bFlag=true;
            }
			i++;
	    }
		return bFlag;
	}	
}

class Lba314
{
	public static void main(String arg[])
	{
		boolean bRet=false;

		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter a String");
		String str=sobj.nextLine();

		StringDemo dobj=new StringDemo();

		bRet=dobj.ChkVowel(str);

		if(bRet==true)
		{
			System.out.println("It contains vowels");
		}
		else
		{
            System.out.println("It is not contains vowels");
        }			
	}
}  