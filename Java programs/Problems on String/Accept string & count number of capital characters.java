/* Write a java program which accept string from user and count number of Captial Characters.

Input : "Marvellous Multi OS"
Output : 4   

*/

import java.util.*;

class StringDemo
{
    public int CountCaptial(String str)
	{
	   int i=0;
       int iCCnt=0;   
       
	   while(i<str.length())
	   {
		    char ch=str.charAt(i);
	        if((ch>='A')&&(ch<='Z'))
		    {
               iCCnt++;
            }
		    i++;
       }
       return iCCnt;
	}
}

class Lba311
{
	public static void main(String arg[])
	{
		int iAns=0;

		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter a String");
		String str=sobj.nextLine();

		StringDemo dobj=new StringDemo();

		iAns=dobj.CountCaptial(str);

		System.out.println("Count number of Captial Characters is: "+iAns);
	}
}  

