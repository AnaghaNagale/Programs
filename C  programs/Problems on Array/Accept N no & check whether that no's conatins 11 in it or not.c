/* Accept N numbers from user and Check whether that numbers contains 11 in it or not.

Input: N:  6
       Elements: 85 66 11 80 93 88 
Output: 11 is present  

Input: N:  6
       Elements: 85 66 3 80 93 88 
Output: 11 is Absent   

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
   	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt])==11)
		{
			return TRUE;
		}
    }	
	return FALSE;
}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    BOOL bRet=FALSE;

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

    bRet=Check(p,iSize);

    if(bRet==TRUE)
    {
       printf("11 is Present\n");
    }
    else
    {
	    printf("11 is Absent\n");
    }  

    free(p);

    return 0;
}   
    