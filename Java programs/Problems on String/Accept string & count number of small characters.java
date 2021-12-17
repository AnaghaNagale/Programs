/* Write a java program which accept string from user and count number of Small Characters.

Input : "Marvellous"
Output : 9    

*/

import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
	{
	   int i=0;
       int iSCnt=0;  

	   while(i<str.length())
	   {
		    char ch=str.charAt(i);
	        if((ch>='a')&&(ch<='z'))
		    {
               iSCnt++;
            }
		    i++;
       }
       return iSCnt;
	}
}

class Lba312
{
	public static void main(String arg[])
	{
		int iAns=0;

		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter a String");
		String str=sobj.nextLine();

		StringDemo dobj=new StringDemo();
		
		iAns=dobj.CountSmall(str);

		System.out.println("Count number of Small Characters is: "+iAns);
	}
}  