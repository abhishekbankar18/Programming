// Accept N numbers from user and return difference between frequency of even number and odd numbers.

// Input :  N :     7
// Elements : 85    66  3   80  93  88  90

// Output : 1(4 -3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iEvenCnt = 0, iOddCnt = 0;
    int iCnt = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    return iEvenCnt-iOddCnt;
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

    iRet= Frequency(p, iSize);

    printf("%d\n",iRet);

    free(p);

    return 0;
}


/*

C:\Users\Abhishek\Desktop\LBHW>gcc Program15_2.c -o Myexe

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
7
Enter 7 elements
Enter element : 1
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
Enter element : 7
90
1
*/