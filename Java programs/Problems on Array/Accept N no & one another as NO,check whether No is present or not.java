/* Write a java program which Accept N numbers from user and  Accept one another number as NO,Check whether NO is present or not.

Input: N:  6
       NO: 66
       Elements: 85 66 11 80 93 88 
Output: true

Input: N:  6
       NO: 12
       Elements: 85 66 3 80 93 88 
Output: false  

*/

import java.util.*;
import MarvellousNumbers.ArrayX1;

class ArrayDemo extends ArrayX1
{
	public ArrayDemo(int iValue)
	{
	  super(iValue);
	}
	public boolean Check(int iValue1)
	{
		int iCnt=0;
		while(iCnt<Arr.length)
		{
			if(Arr[iCnt]==iValue1)
			{
			   return true;
				
			}
		   iCnt++;
		}
		return false;
	}	
}

class Lba341
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iLength=0;
		boolean bRet=false;
		int iNo=0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		System.out.println("Enter number");
		iNo=sobj.nextInt();
		
		ArrayDemo aobj=new ArrayDemo(iLength);
		aobj.Accept();
		
		bRet=aobj.Check(iNo);
		if(bRet==true)
		{
			System.out.println("number is present");
		}
		else
		{
			
			System.out.println("number is not present");
		
		}
	}
}