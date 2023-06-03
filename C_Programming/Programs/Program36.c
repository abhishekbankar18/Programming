// Accept number from user & print non-factors of it
// Display non factor

#include<stdio.h>

void DisplayNonFactors(int iNo)
{

    int iCnt = 0;

    printf("Non factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enetr number\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}