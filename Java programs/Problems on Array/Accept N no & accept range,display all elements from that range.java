/* Write a java program which Accept N numbers from user and  Accept Range.Display all elements from that Range.

Input: N:  6
       Start: 60
	   End:  90
       Elements: 85 66 3 76 93 88 
Output: 66 76 88

Input: N:  6
       Start: 30
	   End: 50
       Elements: 85 66 3 76 93 88 
Output:                               

*/

import java.util.*;
import MarvellousNumbers.ArrayX1;

class ArrayDemo extends ArrayX1
{
	public ArrayDemo(int iValue)
	{
	  super(iValue);
	}
	public void Display(int iValue1,int iValue2)
	{
		int iCnt=0;
		while(iCnt<Arr.length)
		{
			if((Arr[iCnt]>iValue1)&&(Arr[iCnt]<iValue2))
			{
			  System.out.println("Numbers is: "+Arr[iCnt]);
			}
		    iCnt++;
		}
	}	
}

class Lba344
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iLength=0;
		int iRet=0;
		int iNo=0,iStart=0,iEnd=0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		System.out.println("Enter Starting number");
		iStart=sobj.nextInt();
		
		System.out.println("Enter Ending number");
		iEnd=sobj.nextInt();
		
		ArrayDemo aobj=new ArrayDemo(iLength);
		aobj.Accept();
	
		aobj.Display(iStart,iEnd);
	}
}