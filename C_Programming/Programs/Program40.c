// still decreasing order upto 1

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("--------------------------\n");

    iCnt = iNo;
    while( iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }

    printf("\n--------------------------\n");


}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}