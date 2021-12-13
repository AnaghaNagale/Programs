/* Accept N numbers from user and Display Summation of Digits of each number.

Input: N:  6
       Elements: 8522 666 3 66 937 88
Output:22 18 3 12 19 16

 */


#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
  int iCnt=0;
	int iDigit=0;
	int iSumDigits=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	   while(Arr[iCnt]>0)
	   {
	      iDigit=((Arr[iCnt])%10);
		  {
			  iSumDigits=iSumDigits+iDigit;
		  }
          Arr[iCnt]=Arr[iCnt]/10;		
	   }
    }	   
}

int main()
{
   int iSize=0,iRet=0,iCnt=0;
   int *p=NULL;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);
   
   p=(int*)malloc(sizeof(int)*iSize);   //Dynamic Memory Allocation   //Heap Memory
   if(p==NULL)
   {
     printf("Unable to allocate memory\n");
	 return-1;
   } 
   
   printf("Enter %d elements\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      printf("Enter elements:%d\n",iCnt+1);
      scanf("%d",&p[iCnt]);
   }	  
   
   DigitsSum(p,iSize); 

   free(p);
   
   return 0;
}   
    