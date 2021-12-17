/* Write a java program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)   

 */

import java.util.*;

class Digit
{
	public int CountDiff(int iNo)
	{
		int iSumEven=0;
		int iSumOdd=0;
		int iDigit=0;

		while(iNo>0)
		{
			iDigit=iNo%10;
			{
			   if((iDigit%2)==0)
			   {
				   iSumEven=iSumEven+iDigit;
			   }
			   else
			   {
				   iSumOdd=iSumOdd+iDigit;
			   }
			}
		   iNo=iNo/10;
		}
		return iSumEven-iSumOdd;
	}	
}

class Lba335
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

		iRet=dobj.CountDiff(iValue);
		
		System.out.println("Difference is : "+iRet);
    }
	
}