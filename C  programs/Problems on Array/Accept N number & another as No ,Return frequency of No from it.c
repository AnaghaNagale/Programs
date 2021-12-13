/* Accept N numbers from user and Accept one another number as No,return frequency of No from it.

Input: N:  6
       No: 66
       Elements: 85 66 3 66 93 88 
Output: 2

Input: N:  6
       No: 12
       Elements: 85 11 315 11 111
Output: 0 

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
	int iCount=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	    if(Arr[iCnt]==iNo)
		{
		   iCount++;
		}
	}
    return iCount;	
}

int main()
{
   int iSize=0,iRet=0,iCnt=0,iValue=0;
   int *p=NULL;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);

   printf("Enter the number\n");
   scanf("%d",&iValue);
   
   p=(int*)malloc(sizeof(int)*iSize);   //Dynamic Memory Allocation   
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
   
   iRet=Frequency(p,iSize,iValue);  

   printf("Result is:%d\n",iRet);

   free(p);

   return 0;
}   
    