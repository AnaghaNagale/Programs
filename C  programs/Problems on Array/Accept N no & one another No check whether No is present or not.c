/* Accept N numbers from user and Accept one another number as No,Check whether No is present or not.

Input: N:  6
       No: 66
       Elements: 85 66 11 80 93 88 
Output: TRUE

Input: N:  6
       No: 12
       Elements: 85 66 3 80 93 88 
Output: FALSE 

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
   int iCnt=0;
	int iCount=0;

	BOOL bAns=FALSE;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	    if(Arr[iCnt]==iNo)
		{
		  bAns=TRUE;
		  break;
		}
	}	
	return bAns;
}

int main()
{
    int iSize=0,iCnt=0,iValue=0;

    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter numbers of elements\n");
    scanf("%d",&iSize);

	  printf("Enter the number\n");
    scanf("%d",&iValue);
   
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

    bRet=Check(p,iSize,iValue);

    if(bRet==TRUE)
    {
       printf("Number is Present\n");
    }
    else
    {
	    printf("Number is not present\n");
    }  

    free(p);

    return 0;
}   
    