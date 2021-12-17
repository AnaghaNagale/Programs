/* Write a java program which Accept N numbers from user and  return product of all odd elements.

Input: N:  6
       Elements: 15 66 3 70 10 88
Output: 45

Input: N:  6
       Elements: 44 66 72 70 10 88
Output:   0                            

*/

import java.util.*;
import MarvellousNumbers.ArrayX1;

class ArrayDemo extends ArrayX1
{
	public ArrayDemo(int iValue)
	{
	  super(iValue);
	}
	public int OddProduct()
	{
		int iResult=0;
		int iCnt=0;
		int iMult=1;
		while(iCnt<Arr.length)
		{
			if((Arr[iCnt]%2)!=0)
			{
			  iMult=iMult*Arr[iCnt];
			  iResult=iMult;
			}
		    iCnt++;
		}
		return iResult;
	}	
}

class Lba345
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
	
		iRet=aobj.OddProduct();
		System.out.println("Product of all odd numbers is: "+iRet);
	}
}