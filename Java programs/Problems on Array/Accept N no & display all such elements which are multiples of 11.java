/* Write Java program which accept N numbers from user and display all such elements which are multiples of 11.

Input : N : 6
Elements : 85 66 3 55 93 88
Output : 66 55 88         

*/

import java.util.*;
import MarvellousNumbers.ArrayX;

class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iValue)
	{
		super(iValue);
	}
	public void Display1()
	{
		int iCnt=0;
		while(iCnt<Arr.length)
		{
			if((Arr[iCnt]%11)==0)
			{
			    System.out.println("elements divisible by 11 is:"+Arr[iCnt]);
				
			}
		   iCnt++;
		}
	}	
}

class Lba325
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

		aobj.Display1();
	}
}	