/* Write a java program which Accept N numbers from user and  Accept one another number as NO,return index of
   last occurrence of that NO.

Input: N:  6
       NO: 66
       Elements: 85 66 11 66 93 88 
Output: 3

Input: N:  6
       NO: 93
       Elements: 85 66 3 66 93 88
Output: 4

Input: N:  6
       NO: 12
       Elements: 85 11 3 15 66 93 111
Output: -1                                  

*/

import java.util.*;
import MarvellousNumbers.ArrayX1;

class ArrayDemo extends ArrayX1
{
	public ArrayDemo(int iValue)
	{
	  super(iValue);
	}
	public int LastOCC(int iValue1)
	{
		int iCnt=0;
		int bFlag=0;
		for(iCnt=((Arr.length)-1);iCnt>=0;iCnt--)
		{
			if(Arr[iCnt]==iValue1)
			{
			   bFlag=iCnt;
			   break;
			}
		    else
		    {
			   bFlag=-1;
			}   
		}
		return bFlag;
	}	
}

class Lba343
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iLength=0;
		int iRet=0;
		int iNo=0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		System.out.println("Enter number");
		iNo=sobj.nextInt();
		
		ArrayDemo aobj=new ArrayDemo(iLength);
		aobj.Accept();
		
		iRet=aobj.LastOCC(iNo);
		System.out.println("Last Occurrence of number is at index: "+iRet);
	}
}