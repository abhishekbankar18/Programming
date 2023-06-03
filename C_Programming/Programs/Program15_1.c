// Accept N numbers from user and return frequency of even numbers.

// Input :  N :     6
// Elements : 85    66  3   80  93  88

// Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iEvenCnt = 0;
    int iCnt = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet= CountEven(p, iSize);

    printf("Result is %d count of Even Numbers\n",iRet);

    free(p);

    return 0;
}

/*
C:\Users\Abhishek\Desktop\LBHW>gcc Program15_1.c -o Myexe

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
6
Enter 6 elementsEnter element : 1
85
Enter element : 2
66
Enter element : 3
3
Enter element : 4
80
Enter element : 5
93
Enter element : 6
88
Result is 3 count of Even Numbers

*/