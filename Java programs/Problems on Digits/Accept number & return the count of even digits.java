/* Write a java program which accept number from user and return the count of even digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4           

*/

import java.util.*;

class Digit
{
	public int CountEven(int iNo)
	{
		int iCnt=0;
		int iDigit=0;
		while(iNo>0)
		{
			iDigit=iNo%10;
			{
			   if((iDigit%2)==0)
			   {
				   iCnt++;
			   }
			}
		   iNo=iNo/10;
		}
		return iCnt;
	}	
}

class Lba331
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int iValue=0;
		int iRet=0;
		
		System.out.println("Enter number");
		iValue=sobj.nextInt();
		
		if(iValue<0)
		{
			iValue=-iValue;
		}
		
		Digit dobj=new Digit();

		iRet=dobj.CountEven(iValue);

		System.out.println("Count of even digits is : "+iRet);
	}
}