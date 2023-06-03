// Accept N number from user and display all such numbers which contains 3 digits in it

/*
Input :     N:  6
            
            Elements: 8525    665  3   76  953  858

Output: 665 953 858

*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt<iLength; iCnt++)       
    {
        if(Arr[iCnt] < 0)
        {
            Arr[iCnt] = -Arr[iCnt];
        }
        
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p,iSize);
    
    free(p);

    return 0;
}