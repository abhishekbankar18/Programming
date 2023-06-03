// Write a program which accept area in square feet and convert it into square meter 
//(1 square feet = 0.0929 Square meter)

#include<stdio.h>

double SquareMeter(int iValue1)
{
    double dMeter= 0.0;

    printf("Area in Square feet is %d\n",iValue1);

    dMeter = (iValue1 * 0.0929);

    return dMeter;
}

int main()
{
    
    int iValue = 0; 
    double dRet = 0.0;

    printf("Enter area in feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Conversion of %d Square feet to Square meter is : %lf\n",iValue,dRet);

    return 0;
    
}