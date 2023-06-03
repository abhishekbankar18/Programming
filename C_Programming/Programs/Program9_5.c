// Write a program which returns difference between Even facorial and odd factorial of given number.

// Input : 5
// Output : -7   (8 - 15)

// Input : -5
// Output :  -7   (9 - 15)

// Input : 10
// Output : 2895   (3840 - 945)


#include<stdio.h>

int FactorialDiff(int iNo)
{
   int iOddFact =1;
   int iEvenFact = 1;
   int iCnt = 0;

   if(iNo<0)
   {
        iNo = -iNo;
   }

    for(iCnt =2; iCnt<=iNo; iCnt=iCnt+2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt =1; iCnt<=iNo; iCnt=iCnt+2)
    {
        iOddFact = iOddFact * iCnt;
    }
   return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}