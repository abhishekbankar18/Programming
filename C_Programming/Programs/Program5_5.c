// Write a program which accepts number from user and return difference between
// summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   int iGum = 0;

   for(iCnt = 1; iCnt<iNo; iCnt++)
   {
        if((iNo % iCnt ) == 0)
        {
            iSum = iSum + iCnt;
        }
        else
        {
            iGum = iGum + iCnt;
        }
   }
   return iSum - iGum;  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue); 

    printf("%d",iRet);

    return 0;
}