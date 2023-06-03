// Accept amount in US dollar and rturn its corresponding value in Indian currency.
// Consider 1$ as 70rs

// Input : 10
// Output : 700

// Input : 3
// Output : 270

// Input : 1200
// Output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRs = 0;
    
    iRs = iNo * 70;

    return iRs;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}