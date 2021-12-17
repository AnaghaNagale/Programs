/* Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)  

*/

import java.util.*;
import MarvellousNumbers.ArrayX;

class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iValue)
	{
		super(iValue);
	}
	public int Difference()
	{
		int iCnt=0;
		int iSum=0;
		int iEvenSum=0;
		int iOddSum=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)==0)
			{
			 iEvenSum=iEvenSum+Arr[iCnt];
			}
		    else
			{
				
				iOddSum=iOddSum+Arr[iCnt];
			}
		}
		return iEvenSum-iOddSum;
	}
}

class Lba321
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iLength=0;
		int iRet=0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		ArrayDemo aobj=new ArrayDemo(iLength);

		aobj.Accept();
		aobj.Display();

		iRet=aobj.Difference();

		System.out.println("Difference is:"+iRet);
	}
	
}