// addition of non factor

#include<stdio.h>

int SumNonFactors(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enetr number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("Addition of Non Factors : %d\n",iRet);

    return 0;
}