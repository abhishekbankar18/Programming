// Write a program which accept total marks & obtained marks from user and calculate percentage

// Input : 1000     745
// Output : 74.5%


#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0;

    fAns = (float)iNo2 / iNo1*100;
    return fAns;

}

int main()
{
    int iValue1 =0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %.2f %%",fRet);

    return 0;
}

/*
    Please enter total marks
    1000
    Please enter obtained marks
    745
    Percentage is : 74.50 %

*/