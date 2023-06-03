// Accept no in decimal and count number of bits ON of it(Count 1)

#include<stdio.h>

typedef unsigned int UNIT;

int CountOnBits(UNIT No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    UNIT Value = 0;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    Ret = CountOnBits(Value);

    printf("Number of bits which are ON are : %d\n",Ret);

    return 0;
}
