/* Accept N numbers from user and return difference between Frequency of even numbers and odd numbers.

Input: N:  7
       Elements: 85 66 3 80 93 88 90
Output: 1  (4-3)  

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
  int iEvenCount=0;
	int iOddCount=0;
	int iRes=0;
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEvenCount++;
		}
        else
        {
           iOddCount++;
        }
	iRes=iEvenCount-iOddCount;
	}
	return iRes;
}

int main()
{
   int iSize=0,iRet=0,iCnt=0;
   int *p=NULL;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);
   
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
   
   iRet=Frequency(p,iSize);  

   printf("Result is:%d\n",iRet);

   free(p);
   
   return 0;
}   
    