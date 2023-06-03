// Accept N numbers from user and also take another number fron user and check its whether that number is present or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[], int iSize, int iNo )
{
    int iCnt =0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0,  iValue =0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out the occurance :\n");
    scanf("%d",&iValue);

    bRet = CheckOccurance(ptr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in array \n",iValue);
    }
    else{
        printf("%d is not present in array \n",iValue);
    }


    free(ptr);

    return 0;
}