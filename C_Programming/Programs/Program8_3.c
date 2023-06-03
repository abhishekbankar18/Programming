// Write a program to find factorial of given number.

// Input : 5
// Output : 120


// Input : -5
// Output : 120


// Input : 4
// Output : 24


#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}

int main()
{
    
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
