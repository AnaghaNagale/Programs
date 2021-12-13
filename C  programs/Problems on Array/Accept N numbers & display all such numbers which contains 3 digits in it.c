/* Accept N numbers from user and Display all such numbers which contains 3 Digits in it.

Input: N:  6
       Elements: 8522 666 3 66 937 88
Output:666 973  
                       
*/


#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
	int i=0;
    int iCnt=0;
	int iDigit=0;
	
	for(i=0;i<iLength;i++)
	{
	   iDigit=Arr[i];
	   iCnt=0;
	
	   while(iDigit!=0)
	   {
		   iDigit=iDigit/10;
		   iCnt++;
	   }
	   
	   if(iCnt==3)
	   {
		   printf("%d\t",Arr[i]);
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
   
   Digits(p,iSize); 
   
   free(p);
   
   return 0;
}   
    