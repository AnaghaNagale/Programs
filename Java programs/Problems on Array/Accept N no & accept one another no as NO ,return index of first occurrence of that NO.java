/* Write a java program which Accept N numbers from user and  Accept one another number as NO,return index of
   first occurrence of that NO.

Input: N:  6
       NO: 66
       Elements: 85 66 11 80 93 88 
Output: 1

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
	public int FirstOCC(int iValue1)
	{
		int iCnt=0;
		int bFlag=-1;
		while(iCnt<Arr.length)
		{
			if(Arr[iCnt]==iValue1)
			{
			   bFlag=iCnt;
			   break;
			}
		   iCnt++;
		}
		return bFlag;
	}	
}

class Lba342
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
	
		iRet=aobj.FirstOCC(iNo);
		System.out.println("First Occurrence of number is at index: "+iRet);
	}