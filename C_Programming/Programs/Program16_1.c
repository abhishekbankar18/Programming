// Accept N numbers from user and accept one another number as NO, check whether NO is present or not

// Input :  N :     6
//          NO :    66
// Elements : 85    66  3   66  93  88
//
// Output : TRUE


// Input :  N :     6
//          NO :   12
// Elements : 85    11  3   15  11  111
//
// Output : FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bRet = FALSE;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            bRet = TRUE;
        }
    }
    return bRet;
    
}

int main()
{
    int iSize = 0, iCnt = 0, iValue =0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

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

    bRet= Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}

/*
C:\Users\Abhishek\Desktop\LBHW>gcc Program16_1.c -o Myexe

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
6
Enter the number
66
Enter 6 elements
Enter element : 1
85
Enter element : 2
66
Enter element : 3
3
Enter element : 4
66
Enter element : 5
93
Enter element : 6
88
Number is present

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
6
Enter the number
12
Enter 6 elements
Enter element : 1
85
Enter element : 2
11
Enter element : 3
3
Enter element : 4
15
Enter element : 5
11
Enter element : 6
111
Number is not present
*/