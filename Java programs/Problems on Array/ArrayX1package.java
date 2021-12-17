package MarvellousNumbers;

import java.util.*;
public class ArrayX1
{
	public int Arr[];
	public ArrayX1(int iSize)  //Parametrized Constructor
	{
		Arr=new int[iSize];
    }
    public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		int iCnt=0;
		System.out.println("Enter the elements");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}	
    }
    public void Display()	
	{
		int iCnt=0;
		System.out.println("Elements are: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}	
	}	
}
