// Accept N numbers from user and also take another number fron user and return index of 
// that number for the last time if not available return -1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurance(int Arr[], int iSize, int iNo )
{
    int iCnt =0;

    for(iCnt = iSize-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0,  iValue =0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out the index of last occurance :\n");
    scanf("%d",&iValue);

    iRet = CheckLastOccurance(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("%d is not present in array \n",iValue);
    }
    else
    {
        printf("%d is present in array at index %d  \n",iValue,iRet);
    }


    free(ptr);

    return 0;
}