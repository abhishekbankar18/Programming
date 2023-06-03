// Accept N numbers from user and return frequency of 11 from it

// Input :  N :     6
// Elements : 85    66  3   80  93  88

// Output : 0


// Input :  N :     6
// Elements : 85    11  3   15  11  111

// Output : 11 is present

#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCheck=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            iCheck++;
        }
    }
    return iCheck;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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
C:\Users\Abhishek\Desktop\LBHW>gcc Program15_4.c -o Myexe

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
6
Enter 6 elements
Enter element : 1
85
Enter element : 2
66
Enter element : 3
3
Enter element : 4
15
Enter element : 5
93
Enter element : 6
88

0

C:\Users\Abhishek\Desktop\LBHW>Myexe
Enter number of elements
6
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

2
*/