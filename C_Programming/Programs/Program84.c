// Accept N number from user and Display it in Reverse order


#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt>=0 ; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()
{   
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements in the Reverse order is : \n");
    
    DisplayReverse(ptr,iLength);

    free(ptr);

    return 0;
}