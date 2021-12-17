/* Write a java program which accept string from user and return difference between frequency of small Characters
   and capital Characters.

Input : "MarvellouS"
Output : 6  (8-2)  

*/

import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
	{
	   int i=0;
       int iSCnt=0; 
	   int iCCnt=0;
       int iDiff=0;	   
	   int iResult=0;

	   while(i<str.length())
	   {
		    char ch=str.charAt(i);
	        if((ch>='A')&&(ch<='Z'))
		    {
               iCCnt++;
            }
			if((ch>='a')&&(ch<='z'))
		    {
               iSCnt++;
            }
		    i++;
       }
      iResult=iSCnt-iCCnt;
	  return iResult;
	}
}

class Lba313
{
	public static void main(String arg[])
	{
		int iAns=0;

		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter a String");
        String str=sobj.nextLine();

		StringDemo dobj=new StringDemo();

		iAns=dobj.CountDiff(str);
		
		System.out.println("Difference between Frequency of Small Characters and capital Characters is: "+iAns);
	}
}  