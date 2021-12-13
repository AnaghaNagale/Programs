/* Accept N numbers from user and return the largest number.

Input: N:  6
       Elements: 85 66 3 66 93 88
Output:93
Input: N:  6
       Elements: 44 66 72 70 10 88
Output:88   

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
  int iCnt=0;
	int iMax=Arr[0];
	
	if(Arr ==NULL)
	{
		printf("Invalid address ");
	}
  if(iLength<=0)
	{
		printf("Invalid size");
		return 0;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
        if(Arr[iCnt]>iMax)
		{
		  iMax=Arr[iCnt];
        }			
	}
    return iMax;
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
   
   iRet=Maximum(p,iSize); 

   printf("Largest number is %d\n",iRet);

   free(p);
   
   return 0;
}   
    