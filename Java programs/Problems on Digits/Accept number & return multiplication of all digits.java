/* Write a java program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864          

*/

import java.util.*;

class Digit
{
	public int Multiply(int iNo)
	{
		int iCnt=0;
		int iDigit=0;
		int iMul=1;

		while(iNo>0)
		{
			iDigit=iNo%10;
			if(iDigit==0)
			{
				iDigit=1;
			}
			{
				iMul=iMul*iDigit;
			}
		   iNo=iNo/10;
		}
		return iMul;
	}	
}

class Lba334
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

		iRet=dobj.Multiply(iValue);
		
		System.out.println("Multipication of digits  is : "+iRet);
	}
	
}