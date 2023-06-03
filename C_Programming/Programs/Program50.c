// Accept number from user and count number of digits in that number
//Updater & Filter

//Input : 751
//Output : 3

//Input : 7515
//Output : 4

//Input : 26
//Output : 2

//Input : 6
//Output : 1

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo == 0)       // Filter
    {
        return 1;
    }

    if(iNo < 0)     // Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }


    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}