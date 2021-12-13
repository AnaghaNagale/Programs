/* Accept N numbers from user and Accept Range,Display all elements from that Range.

Input: N:  6
       Start: 60
	     End:  90
       Elements: 85 66 3 76 93 88 
Output:66 76 88

Input: N:  6
       Start: 30
	     End: 50
       Elements: 85 66 3 76 93 88
Output: 

*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	   if((iStart<Arr[iCnt])&&(iEnd>Arr[iCnt]))
	   {
          printf("%d\t",Arr[iCnt]);
       }		  
    }
}

int main()
{
   int iSize=0,iCnt=0,iValue1=0,iValue2=0;
   int *p=NULL;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);

   printf("Enter the Starting point\n");
   scanf("%d",&iValue1);

   printf("Enter the Ending point\n");
   scanf("%d",&iValue2);
   
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
   
   Range(p,iSize,iValue1,iValue2);  

   free(p);
   
   return 0;
}   
    