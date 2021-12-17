/* Write a java program which accept number from user and return the count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0           

*/

import java.util.*;

class Digit
{
	public int CountRange(int iNo)
	{
		int iCnt=0;
		int iDigit=0;
		while(iNo>0)
		{
			iDigit=iNo%10;
			{
			   if((iDigit>3)&&(iDigit<7))
			   {
				   iCnt++;
			   }
			}
		   iNo=iNo/10;
		}
		return iCnt;
	}	
}

class Lba333
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

		iRet=dobj.CountRange(iValue);
		
		System.out.println("Count of digits in between 3 and 7 is : "+iRet);
	}
}	