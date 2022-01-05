/* Write a program which accept three numbers from user and print its multiplication.
Input:   5   4   7
Output:  140
Input:   5   0    7
Output :0
Input:5  0   0
Output:0
Input:  0  0  0
Output: 0
*/

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{ 
  int res;

  res=iNo1*iNo2*iNo3;
  
  return res;
}  

int main()
{
   int iValue1=0,iValue2=0,iValue3=0,iRet=0;

   printf("Please enter three numbers\t");
   scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

   iRet=Multiply(iValue1,iValue2,iValue3);
   printf("Multiplication of three numbers is:%d\n",iRet);

   return 0;
}   
